def karatsuba(x,y):
	"""Karatsuba algorithm"""
	if x < 10 or y < 10:
		return x * y
	else:
		n = max(len(str(x)),len(str(y)))
		halfdigit = n / 2
		
		a = x / 10**(halfdigit)
		b = x % 10**(halfdigit)
		c = y / 10**(halfdigit)
		d = y % 10**(halfdigit)
		
		ac = karatsuba(a,c)
		bd = karatsuba(b,d)
		ad_plus_bc = karatsuba(a+b,c+d) - ac - bd
        
        # this little trick, writing n as 2*halfdigit takes care of both even and odd n
		result = ac * 10**(2*halfdigit) + (ad_plus_bc * 10**halfdigit) + bd

		return result

a = 3141592653589793238462643383279502884197169399375105820974944592;
b = 2718281828459045235360287471352662497757247093699959574966967627;

print(karatsuba(a, b))
