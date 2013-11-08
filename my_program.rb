#!/usr/bin/env ruby

class StringCensoror

  def initialize replacement
    @replacement = replacement
  end
  def censor input
    output = ""
    words = input.reverse.split.reverse
     print words
    words.each do |word|
    end
    output
  end
end

obj = StringCensoror.new ""

ARGV.each do |a|
   puts obj.censor a
end