package Scripts::Windy::Web::Model::Group;

use Mojo::Base 'Scripts::Windy::Web::Model::Base';
use Scripts::Base;
use Scripts::Windy::Web::Util;
use Scripts::Windy::Web::Model::GroupMember;

has [qw/name number ownerTencent myRelationship
     adminMax memberMax levelName client/];
has members => sub { []; };

sub findMember
{
    my ($self, $attr, $val) = @_;
    findIn($self->members, $attr, $val);
}

sub newMember
{
    my $self = shift;
    my @args = @_;
    if (@args == 1 and ref $args[0] eq 'HASH') {
        @args = %{$args[0]};
    }
    my $member = Scripts::Windy::Web::Model::GroupMember->new
        (@args, group => $self, client => $self->client);
    push @{$self->members}, $member;
    $member;
}

sub send
{
    my ($self, $text) = @_;
    $self->client->sendMessage
        ('group-message',
         $self->number, # source
         '', # receiver?
         $text,
        );
}

1;
