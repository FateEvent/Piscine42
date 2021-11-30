#!/usr/bin/perl
use warnings;
use strict;

my $str = <<END;
I write what I want
whenever I want
even now, btw
END

my $filename = '/Users/faventur/Desktop/main_d_essay/SBQ/angelic.txt';

open(FH, '>', $filename) or die $!;

print FH $str;

close(FH);

print "Writing to file successfully!\n";