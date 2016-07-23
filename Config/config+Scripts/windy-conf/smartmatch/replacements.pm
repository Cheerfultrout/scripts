package Scripts::Windy::Conf::smartmatch::replacements;
use Exporter;
use 5.012;
use utf8;
our @ISA = qw/Exporter/;
our @EXPORT = qw/$caller $replacements/;

# 风妹的各种称呼
my $myName = qr/(?:(?<!风|風)(?:小|西)?(?:风|風)(?:儿)?(?:妹(?:子|儿|砸|妹)?|儿|酱|姐{1,2})|小风姬|西风待人)/;
my $you = qr/(?:你|乃(?:酱)?|子|汝|君|侬|尔|而|汝|阁下|陛下|殿下|足下)/;
my $me = qr/(?:我|咱(?:家)?|在下|人家|吾(?:辈)?|余(?:一人)?|朕|寡人|孤(?:王)?|本.|本少爷|本小姐)/;
my $head = qr/(?:头|脑袋(?:瓜子)?)/;
# 表情
# wwwww, qwqwqqqqqq, 0 0 0, ououo
# 这只是几个例子，绝对不是兔嫂在卖萌，嗯。
my $emotion = qr/(?:w+|[PpQq](?:.[PpQq])+[PpQq]*|0(?:.0)+|[Oo](?:.[Oo])+|x+|-(?:.-)+|=(?:.=)+|😂|h+|☆|\(\?ω\?=\)|\|ω\?`\)|Σ)/;
#标点
my $punc = qr/(?:\s+|？|。|\?|\.|~|～|,|，|!|！|\^|【|】|\[|\]|（|\(|\)|）|「|」|“|”)/;

# 叹词
my $excl = qr/(?:呜|哟|哦|喵|咩|呜|吗|[啊阿][咧勒]?|呀|哪|呐|嘛|咪|口意|噫|吁|嚱|嗯|恩|诶多?|欸|哎|唉|等|噗|铥(?:的)?|这|并|23{2,}(?:4*3*)*|6+|哈|蛤|呵|咳|[科颗]{2,}|哼|口亨|唧|啥|yuki|喂|卧槽|woc|miuyi|略{3,})/;
my $excl_pre = qr/(?:[Tt][Mm]|(?:神)?(?:特(?:么|喵)|(?:他|她|它)妈)(?:的)?|所以(?:说)?|说来|话说(?:回来)?|说回来|然而|(?:可|但)(?:是)?|只是|因为|只因|十分|简直)/;
my $excl_post = qr/(?:呢|哉|${me}也|矣|$you|吧|了|[bp]u|的(?:样子|说)?|desu|极了|惹)/;
my $excl_mid = qr/(?:)/;
# 动作和状态
my $status_line = qr/(?:摊手|捂脸|蹭(?:一下)?|(?:一脸)?[懵蒙]逼|划掉|划去|打勾|打钩|(?:并)?不|再见|(?:一脸)?生无可恋|大?[误雾]|抱[紧抱住]?|紧紧抱住|(?:摸{1,2}|摸一?下子?)${head}?|揉揉(?:$head|脸)?|举高高|大?笑|哭)/;
my $emotion_post = qr/(?:$excl|$excl_post|$punc|$emotion|$myName)*(?:${punc}+${status_line}*(?:${punc}|$excl|$excl_post|$emotion)*)*/;
my $emotion_pre = qr/(?:(?:${punc}|$excl|$excl_pre|$emotion)*${status_line}*${punc}+)*?(?:$excl|$excl_pre|$punc|$emotion|$myName)*?/;
my $emotion_mid = qr/(?:$excl|$excl_mid|$punc|$emotion|$you)*/;
#my $suffix = qr/(?:哪|呐|呀|啊|喵|$emotion)/;

our $caller = qr/$emotion_pre$myName$emotion_mid/;
our $replacements = {
    '标点' => $punc,
    '风妹' => $caller,
    '前' => $emotion_pre,
    '后' => $emotion_post,
    '中' => $emotion_mid,
    '我' => $me,
    '为什么' => qr/(?:为(?:什么|毛|喵|咩|何|啥)|怎么?(?:能够?|可以)?|咋)/,
    '你' => $you,
    '什么' => qr/(?:什么|神马|[什神][喵摸]|啥子?)/,
    '以后' => qr/(?:(?:从?今)?[往以而]后|今后)/,
    '不要' => qr/(?:别|不要|莫(?:要)?|万?[勿毋])/,
    '称呼' => qr/(?:叫|称呼|呼|唤|喊)/,
    '就好' => qr/(?:就好|就行|就可以了?|就是了?)/,
    '走开' => qr/(?:走开|奏凯)/,
    'd1' => '【',
    'd2' => '】',
    'd5' => '<',
    'd6' => '>',
    '换行' => "\n",
    '下讯' => "\n\n",
    };

1;
