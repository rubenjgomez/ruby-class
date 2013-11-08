#!/usr/bin/env ruby

class StringCensoror

  def initialize replacement, curse_words
    @replacement = replacement
    @curse_words = curse_words
  end

  def censor input
    output = ""

    words = input.split

    words.each do |word|
      if @curse_words.include? word
        output = output + @replacement * word.length + " "
      else
        output = output + word + " "
      end
    end

    output
  end
end

obj = StringCensoror.new "*", ["fuck", "shit", "asshole"]

ARGV.each do |a|
   puts obj.censor a
end