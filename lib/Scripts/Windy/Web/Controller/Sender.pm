package Scripts::Windy::Web::Controller::Sender;

use Scripts::Base;
use Mojo::Base 'Mojolicious::Controller';
use MIME::Base64;
use Scripts::Windy::Web::Model::Event;
use Mojo::JSON qw/from_json/;

has target => 'http://127.0.0.1:7456/api/call';
sub index
{
    my $self = shift;
    my $param = term $self->req->text;
    $self->render_later;
    # 送去上游
    $self->ua->post($self->target,
                    {'Content-Type' => 'application/json'},
                    $param,
                    sub
                    {
                        my ($ua, $tx) = @_;
                        $self->render(text => $tx->res->body);
                    });
}

1;
