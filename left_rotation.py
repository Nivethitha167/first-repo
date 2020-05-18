#Left Array-Rotating 
#Python
a=[1,2,3,4,5]
m=2 # no.of.rotation
b=a[:m]
c=a[m:]
a=c+b
print (a)
