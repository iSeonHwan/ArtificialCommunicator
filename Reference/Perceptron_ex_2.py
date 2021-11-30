# define: Perceptron AND version example 2
# date: 2021.11.14.
# Resource: 밑바닥 인공지능(사이토코기)

def AND(x1, x2):
	x = np.array([x1 x2])
	w = np.array([0.5, 0.5])
	b = -0.7
	tmp = np.sum(w*x) + b
	if tmp <= 0:
		return 0
	else:
		return 1

if __name__ == '__main__':
	import numpy as np
	
	AND(0, 0)
	AND(1, 0)
	AND(0, 1)
	AND(1, 1)
