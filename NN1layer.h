#include<string>

#ifndef NN1LAYER_H_
#define NN1LAYER_H_

using namespace std;

class NN1layer {
public:
	int iSize;
	int hSize;
	int oSize;
	double **ihw;
	double **how;

	NN1layer(int iSize, int hSize, int oSize);
	NN1layer(string fileName);
	void initWeights();
	void forward(double input[], double hidden[], double output[]);
	void backProp(double input[], double hidden[], double output[]);
	void softMaxFunction(double ouput[], int size);
	inline double activationFunction(double x);
	inline double activationDerivativeFunction(double x);
	void save(string fileName);
	void load(string fileName);
	virtual ~NN1layer();

};

#endif