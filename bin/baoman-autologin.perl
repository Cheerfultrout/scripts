#!/usr/bin/env perl

use 5.012;
use Scripts::RageComics;
use Scripts::Base;
no warnings qw/expermental/;
my $net = "${scriptsDir}waitForNetwork.perl";
system { $net } $net;
given (my $ret = Scripts::RageComics->new->login) {
    say term '�Ѿ���¼����' when 1;
    final when 2;
    default { die term '��¼����' }
}
