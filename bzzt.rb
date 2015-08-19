for x in 1..500
  xs = x.to_s
  if (x % 3) == 0
    puts 'bzzt'
  elsif xs =~ /3/
    puts 'bzzt'
  else
    puts x
  end
end