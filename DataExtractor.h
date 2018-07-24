#include <vector>

#ifndef DATAEXTRACTOR_H_
#define DATAEXTRACTOR_H_

using namespace std;

class DataEntry {
public:
	vector<double> input;
	int output;

	DataEntry(vector<double> input, int ouput);
};

class DataExtractor {
private:
	int trainIndex;
	int epochs;
	vector<double> means;
	vector<double> deviations;

public:
	vector<DataEntry> trainingTuples;
	vector<DataEntry> testTuples;
	int numOutputs;

	DataExtractor(string inputFile, int numOutputs, double trainFraction);
	void normalize();
	vector<DataEntry> generateBatch (int batchSize);
	void reset();
	int getEpochs();
	virtual ~DataExtractor();
};

#endif /* DATAEXTRACTOR_H_ */