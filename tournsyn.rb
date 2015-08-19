x=$*[0]
y=x.match(/..(\d*)/)[1].to_i
x=~/Bo/?(puts"Ft#{y/2+1}"):(puts"Bo#{y*2-1}")