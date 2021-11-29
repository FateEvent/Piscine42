#!/usr/bin/perl
use warnings;
use strict;

my $src = '/Users/faventur/Desktop/main_d_essay/SBQ/angelic.txt';
my $des = '/Users/faventur/Desktop/main_d_essay/SBQ/devilish.txt';
/
my $src = shift @ARGV;
my $des = shift @ARGV;
/
# open source file for reading
open(SRC, '<', $src) or die $!;

# open destination file for writing
open(DES, '>', $des) or die $!;

print("copying content from $src to $des\n");

while(<SRC>){
   print DES $_;
}

# always close the filehandles
close(SRC);
close(DES);

print "File content copied successfully!\n";