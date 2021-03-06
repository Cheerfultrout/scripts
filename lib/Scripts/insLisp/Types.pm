package Scripts::insLisp::Types;

use Exporter;
our @ISA = qw/Exporter/;
our @EXPORT = qw/isLambda isFunc isCallable
    isSymbol isArray isHash isConstant dd/;
use Scripts::Base;

sub isLambda
{
    ref shift eq 'Scripts::insLisp::Lambda';
}

sub isFunc
{
    ref shift eq 'Scripts::insLisp::Func';
}

sub isCallable
{
    my $obj = shift;
    isFunc($obj) or isLambda($obj);
}

sub isSymbol
{
    ref shift eq 'Scripts::insLisp::Symbol';
}

sub isArray
{
    UNIVERSAL::isa(shift, 'ARRAY');
}

sub isHash
{
    UNIVERSAL::isa(shift, 'HASH');
}

sub isConstant
{
    not ref shift;
}

sub dd
{
    my $val = shift;
    my $res = '';
    if (isLambda($val)) {
        $res = '(lambda ' . dd([$val->args])
                 . ' {defScope='. $val->defScope . '} '
                 . (join ' ', (map dd($_), $val->exprs)) . ')';
    } elsif (isFunc($val)) {
        $res = '<func>';
    } elsif (isSymbol($val)) {
        $res = $val->name;
    } elsif (isHash($val)) {
        $res = '(hash ' . (join ' ', map dd($_), %$val) . ')';
    } elsif (isArray($val)) {
        $res = '(' . (join ' ', map dd($_), @$val) . ')';
    } else {
        $res = '{'.$val.'}';
    }
    $res;
}

1;
