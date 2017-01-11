
#include "Property.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <dlib/svm.h>

using namespace std;

// Function to read CSV file and store it into a vector of objects of type "property"
void readCSV(istream &input, vector<Property>& newPropertySet);
// Function to write Results from Memory to CSV file
void writeDataSet(const vector<Property>& newDataSet);

// Regression Functions
// 1: Support Vector Machine Algorithm
void dlibSVM(const vector<Property>& newDataSet, const vector<Property>& newTestSet);
// 2: Relevance Vector Machine Algorithm
void dlibRVM(const vector<Property>& newDataSet , const vector<Property>& newTestSet);

int main()
{
	cout << "Read training and testing file... " << endl;

	ifstream inputTrainSet("train.csv");
	if (!inputTrainSet.is_open()) {
		cout << "train file not found!" << endl;
	}
	
	ifstream inputTestSet("test.csv");
	if (!inputTestSet.is_open()) {
		cout << "test file not found!" << endl;
	}
	
	vector <Property> trainSet;
	readCSV(inputTrainSet, trainSet);

	vector <Property> testSet;
	readCSV(inputTestSet, testSet);

	cout << "Converted training file saved as: 'converted training data.csv'"<<endl;
	writeDataSet(trainSet);

	cout << "Please specify the regression technique to be performed on the training file by entering one of the following numbers: " << endl;
	while (1) {
		cout << "1: Support Vector Machine " << endl;
		cout << "2: Relevance Vector Machine " << endl;
		cout << "0: Exit Programm " << endl;
		// more options
		//
		int number;
		cin >> number;
		if (number == 0) {
			break;
		}
		else if (number == 1) {
			dlibSVM(trainSet, testSet);
			cout << "Thank you. Perform regression using other parameters or Exit the programm:" << endl;
		}
		else if  (number == 2) {
			dlibRVM(trainSet, testSet);
			cout << "Thank you. Perform regression using other parameters or Exit the programm: " << endl;
		}
		else
		{ 
			cout << "The option does not exist " << endl; 
		}
	}
	return 0;
}

void readCSV(istream &input, vector<Property>& newPropertySet) {
	// skip header line 
	string dummyLine;
	getline(input, dummyLine);

	// enter line by line of csv file
	string tempPropertyString;

	while (getline(input, tempPropertyString)) {
		istringstream tempStream(tempPropertyString);// make it a stream again so that 

		vector<string> tempVector;
		string tempElement;

		//create a vector temporary elements 
		while (getline(tempStream, tempElement, ',')) {
			tempVector.push_back(tempElement);
		}
		// check for size of file to distinguish train file from test file
		int fileSize = tempVector.size();

		Property newProperty;

		// Functions converting the data
		newProperty.convertId(tempVector[0]);
		newProperty.convertMSSubClass(tempVector[1]);
		newProperty.convertMSZoning(tempVector[2]);
		newProperty.convertLotFrontage(tempVector[3]);
		newProperty.convertLotArea(tempVector[4]);
		newProperty.convertStreet(tempVector[5]);
		newProperty.convertAlley(tempVector[6]);
		newProperty.convertLotShape(tempVector[7]);
		newProperty.convertLandContour(tempVector[8]);
		newProperty.convertUtilities(tempVector[9]);
		newProperty.convertLotConfig(tempVector[10]);
		newProperty.convertLandSlope(tempVector[11]);
		newProperty.convertNeighborhood(tempVector[12]);
		newProperty.convertCondition1(tempVector[13]);
		newProperty.convertCondition2(tempVector[14]);
		newProperty.convertBldgType(tempVector[15]);
		newProperty.convertHouseStyle(tempVector[16]);
		newProperty.convertOverallQual(tempVector[17]);
		newProperty.convertOverallCond(tempVector[18]);
		newProperty.convertYearBuilt(tempVector[19]);
		newProperty.convertYearRemodAdd(tempVector[20]);
		newProperty.convertRoofStyle(tempVector[21]);
		newProperty.convertRoofMatl(tempVector[22]);
		newProperty.convertExterior1st(tempVector[23]);
		newProperty.convertExterior2nd(tempVector[24]);
		newProperty.convertMasVnrType(tempVector[25]);
		newProperty.convertMasVnrArea(tempVector[26]);
		newProperty.convertExterQual(tempVector[27]);
		newProperty.convertExterCond(tempVector[28]);
		newProperty.convertFoundation(tempVector[29]);
		newProperty.convertBsmtQual(tempVector[30]);
		newProperty.convertBsmtCond(tempVector[31]);
		newProperty.convertBsmtExposure(tempVector[32]);
		newProperty.convertBsmtFinType1(tempVector[33]);
		newProperty.convertBsmtFinSF1(tempVector[34]);
		newProperty.convertBsmtFinType2(tempVector[35]);
		newProperty.convertBsmtFinSF2(tempVector[36]);
		newProperty.convertBsmtUnfSF(tempVector[37]);
		newProperty.convertTotalBsmtSF(tempVector[38]);
		newProperty.convertHeating(tempVector[39]);
		newProperty.convertHeatingQC(tempVector[40]);
		newProperty.convertCentralAir(tempVector[41]);
		newProperty.convertElectrical(tempVector[42]);
		newProperty.convertFirstFlrSF(tempVector[43]);
		newProperty.convertSecndFlrSF(tempVector[44]);
		newProperty.convertLowQualFinSF(tempVector[45]);
		newProperty.convertGrLivArea(tempVector[46]);
		newProperty.convertBsmtFullBath(tempVector[47]);
		newProperty.convertBsmtHalfBath(tempVector[48]);
		newProperty.convertFullBath(tempVector[49]);
		newProperty.convertHalfBath(tempVector[50]);
		newProperty.convertBedroomAbvGr(tempVector[51]);
		newProperty.convertKitchenAbvGr(tempVector[52]);
		newProperty.convertKitchenQual(tempVector[53]);
		newProperty.convertTotRmsAbvGrd(tempVector[54]);
		newProperty.convertFunctional(tempVector[55]);
		newProperty.convertFireplaces(tempVector[56]);
		newProperty.convertFireplaceQu(tempVector[57]);
		newProperty.convertGarageType(tempVector[58]);
		newProperty.convertGarageYrBlt(tempVector[59]);
		newProperty.convertGarageFinish(tempVector[60]);
		newProperty.convertGarageCars(tempVector[61]);
		newProperty.convertGarageArea(tempVector[62]);
		newProperty.convertGarageQual(tempVector[63]);
		newProperty.convertGarageCond(tempVector[64]);
		newProperty.convertPavedDrive(tempVector[65]);
		newProperty.convertWoodDeckSF(tempVector[66]);
		newProperty.convertOpenPorchSF(tempVector[67]);
		newProperty.convertEnclosedPorch(tempVector[68]);
		newProperty.convertSsnPorch(tempVector[69]);
		newProperty.convertScreenPorch(tempVector[70]);
		newProperty.convertPoolArea(tempVector[71]);
		newProperty.convertPoolQC(tempVector[72]);
		newProperty.convertFence(tempVector[73]);
		newProperty.convertMiscFeature(tempVector[74]);
		newProperty.convertMiscVal(tempVector[75]);
		newProperty.convertMoSold(tempVector[76]);
		newProperty.convertYrSold(tempVector[77]);
		newProperty.convertSaleType(tempVector[78]);
		newProperty.convertSaleCondition(tempVector[79]);

		// SalePrice is just included in train file
		if (fileSize == 81){
		newProperty.convertSalePrice(tempVector[80]);
		}

		newPropertySet.push_back(newProperty);
	}
}

void writeDataSet(const vector<Property>& newDataSet)
{
	ofstream outputFile;
	outputFile.open("converted training data.csv");
	outputFile << "Id,MSSubClass,MSZoning,LotFrontage,LotArea,Street,Alley,LotShape,LandContour,Utilities,LotConfig,LandSlope,Neighborhood,Condition1,Condition2,BldgType,HouseStyle,OverallQual,OverallCond,YearBuilt,YearRemodAdd,RoofStyle,RoofMatl,Exterior1st,Exterior2nd,MasVnrType,MasVnrArea,ExterQual,ExterCond,Foundation,BsmtQual,BsmtCond,BsmtExposure,BsmtFinType1,BsmtFinSF1,BsmtFinType2,BsmtFinSF2,BsmtUnfSF,TotalBsmtSF,Heating,HeatingQC,CentralAir,Electrical,1stFlrSF,2ndFlrSF,LowQualFinSF,GrLivArea,BsmtFullBath,BsmtHalfBath,FullBath,HalfBath,BedroomAbvGr,KitchenAbvGr,KitchenQual,TotRmsAbvGrd,Functional,Fireplaces,FireplaceQu,GarageType,GarageYrBlt,GarageFinish,GarageCars,GarageArea,GarageQual,GarageCond,PavedDrive,WoodDeckSF,OpenPorchSF,EnclosedPorch,3SsnPorch,ScreenPorch,PoolArea,PoolQC,Fence,MiscFeature,MiscVal,MoSold,YrSold,SaleType,SaleCondition,SalePrice" << endl;
	
	int numberProperties = newDataSet.size();
	
	for (int i = 0; i < numberProperties; i++) {
		outputFile 
			<< newDataSet[i].Id << ","
			<< newDataSet[i].MSSubClass << ","
			<< newDataSet[i].MSZoning << ","
			<< newDataSet[i].LotFrontage << ","
			<< newDataSet[i].LotArea << ","
			<< newDataSet[i].Street << ","
			<< newDataSet[i].Alley << ","
			<< newDataSet[i].LotShape << ","
			<< newDataSet[i].LandContour << ","
			<< newDataSet[i].Utilities << ","
			<< newDataSet[i].LotConfig << ","
			<< newDataSet[i].LandSlope << ","
			<< newDataSet[i].Neighborhood << ","
			<< newDataSet[i].Condition1 << ","
			<< newDataSet[i].Condition2 << ","
			<< newDataSet[i].BldgType << ","
			<< newDataSet[i].HouseStyle << ","
			<< newDataSet[i].OverallQual << ","
			<< newDataSet[i].OverallCond << ","
			<< newDataSet[i].YearBuilt << ","
			<< newDataSet[i].YearRemodAdd << ","
			<< newDataSet[i].RoofStyle << ","
			<< newDataSet[i].RoofMatl << ","
			<< newDataSet[i].Exterior1st << ","
			<< newDataSet[i].Exterior2nd << ","
			<< newDataSet[i].MasVnrType << ","
			<< newDataSet[i].MasVnrArea << ","
			<< newDataSet[i].ExterQual << ","
			<< newDataSet[i].ExterCond << ","
			<< newDataSet[i].Foundation << ","
			<< newDataSet[i].BsmtQual << ","
			<< newDataSet[i].BsmtCond << ","
			<< newDataSet[i].BsmtExposure << ","
			<< newDataSet[i].BsmtFinType1 << ","
			<< newDataSet[i].BsmtFinSF1 << ","
			<< newDataSet[i].BsmtFinType2 << ","
			<< newDataSet[i].BsmtFinSF2 << ","
			<< newDataSet[i].BsmtUnfSF << ","
			<< newDataSet[i].TotalBsmtSF << ","
			<< newDataSet[i].Heating << ","
			<< newDataSet[i].HeatingQC << ","
			<< newDataSet[i].CentralAir << ","
			<< newDataSet[i].Electrical << ","
			<< newDataSet[i].FirstFlrSF << ","
			<< newDataSet[i].SecndFlrSF << ","
			<< newDataSet[i].LowQualFinSF << ","
			<< newDataSet[i].GrLivArea << ","
			<< newDataSet[i].BsmtFullBath << ","
			<< newDataSet[i].BsmtHalfBath << ","
			<< newDataSet[i].FullBath << ","
			<< newDataSet[i].HalfBath << ","
			<< newDataSet[i].BedroomAbvGr << ","
			<< newDataSet[i].KitchenAbvGr << ","
			<< newDataSet[i].KitchenQual << ","
			<< newDataSet[i].TotRmsAbvGrd << ","
			<< newDataSet[i].Functional << ","
			<< newDataSet[i].Fireplaces << ","
			<< newDataSet[i].FireplaceQu << ","
			<< newDataSet[i].GarageType << ","
			<< newDataSet[i].GarageYrBlt << ","
			<< newDataSet[i].GarageFinish << ","
			<< newDataSet[i].GarageCars << ","
			<< newDataSet[i].GarageArea << ","
			<< newDataSet[i].GarageQual << ","
			<< newDataSet[i].GarageCond << ","
			<< newDataSet[i].PavedDrive << ","
			<< newDataSet[i].WoodDeckSF << ","
			<< newDataSet[i].OpenPorchSF << ","
			<< newDataSet[i].EnclosedPorch << ","
			<< newDataSet[i].SsnPorch << ","
			<< newDataSet[i].ScreenPorch << ","
			<< newDataSet[i].PoolArea << ","
			<< newDataSet[i].PoolQC << ","
			<< newDataSet[i].Fence << ","
			<< newDataSet[i].MiscFeature << ","
			<< newDataSet[i].MiscVal << ","
			<< newDataSet[i].MoSold << ","
			<< newDataSet[i].YrSold << ","
			<< newDataSet[i].SaleType << ","
			<< newDataSet[i].SaleCondition << ","
			<< newDataSet[i].SalePrice << ","<<endl;
	}
}

void dlibSVM(const vector<Property>& newDataSet, const vector<Property>& newTestSet)
{
		// define the sample type consisting of three features and the kernel type  
		typedef dlib::matrix<double, 10, 1> sample_type;
		typedef dlib::radial_basis_kernel<sample_type> kernel_type;

		std::vector<sample_type> samples ;
		std::vector<double> targets ;
		sample_type m;

		//Define the number of samples used for training
		int sampleSize = 0 , inputSize = 0;
		cout << "Please enter the number of samples you want to use to train the model (Maximum number of samples: 1460)" << endl;
		cin >> inputSize;
		if (inputSize > 1460) {
			sampleSize = 1460;
			cout << "exceeded maximum number of samples. Sample size set to maximum" << endl;
		}
		else {
			sampleSize = inputSize;
		}

		//Get samples and targets from training set in memory
		for (int i = 0; i < sampleSize; i++) {

			m(0) = newDataSet[i].OverallQual;
			m(1) = newDataSet[i].GarageCars;
			m(2) = newDataSet[i].GrLivArea;
			m(3) = newDataSet[i].KitchenQual;
			m(4) = newDataSet[i].ExterQual;
			m(5) = newDataSet[i].GarageArea;
			m(6) = newDataSet[i].TotalBsmtSF;
			m(7) = newDataSet[i].FirstFlrSF;
			m(8) = newDataSet[i].FullBath;
			m(9) = newDataSet[i].YearBuilt;
			samples.push_back(m);
			targets.push_back(newDataSet[i].SalePrice);
		}

		//Normalize data 
		dlib::vector_normalizer<sample_type> normalizer;
		normalizer.train(samples);
		for (unsigned long i = 0; i < samples.size(); ++i){ 
			samples[i] = normalizer(samples[i]);
		}

		// Set the regression technique and associated parameters  
		dlib::svr_trainer<kernel_type> trainer;
		trainer.set_kernel(kernel_type());

		double setC = 110000;
		cout << "Please enter a value to set C-Parameter in order to control the training Error (Default 110000): " << endl;
		cin >> setC;
		cout << "Using C of " << setC << endl;
		trainer.set_c(setC);

		double Epsilon = 0.001;
		cout << "Please enter a value to set Epsilon in order to control accuracy of training (Default 0.001): " << endl;
		cin >> Epsilon;
		cout << "using Epsilon of " << Epsilon << endl;
		trainer.set_epsilon_insensitivity(Epsilon);

		// train a function based on sample data
		cout << "training the model..." << endl;
		dlib::decision_function<kernel_type> df = trainer.train(samples, targets);

		// Perform 5-fold cross-validation and find the mean squared error and R-squared
		cout << "Performing 5-fold cross validation..." << endl;
		randomize_samples(samples, targets);
		cout << "MSE and R-Squared: " << cross_validate_regression_trainer(trainer, samples, targets, 5) << endl;

		// Create correct input data from test file in order to use training function
		cout << "Performing regression on test file:" << endl;

		std::vector<sample_type> testSamples;

		int numberTestProperties = newTestSet.size();

		for (int i = 0; i < numberTestProperties; i++)
		{
			m(0) = newTestSet[i].OverallQual;
			m(1) = newTestSet[i].GarageCars;
			m(2) = newTestSet[i].GrLivArea;
			m(3) = newTestSet[i].KitchenQual;
			m(4) = newTestSet[i].ExterQual;
			m(5) = newTestSet[i].GarageArea;
			m(6) = newTestSet[i].TotalBsmtSF;
			m(7) = newTestSet[i].FirstFlrSF;
			m(8) = newTestSet[i].FullBath;
			m(9) = newTestSet[i].YearBuilt;
			testSamples.push_back(m);
		}

		// normalize test data
		normalizer.train(testSamples);
		for (unsigned long i = 0; i < testSamples.size(); ++i){
			testSamples[i] = normalizer(testSamples[i]);
		}

		// Output test results from test file into Results.csv
		ofstream outputFile;
		outputFile.open("Results.csv");
		outputFile << "Id,SalePrice" << endl;

		for (int i = 0; i < numberTestProperties; i++) {
			outputFile << newTestSet[i].Id << "," << df(testSamples[i]) << endl;
		}

		cout << "Predicted Sale Prices are saved as Results.csv " << endl;
		cout << endl;
	}

void dlibRVM(const vector<Property>& newDataSet, const vector<Property>& newTestSet)
{

	// Define the sample type consisting of three features and the kernel type 
	typedef dlib::matrix<double, 3, 1> sample_type;
	typedef dlib::radial_basis_kernel<sample_type> kernel_type;

	dlib::rvm_regression_trainer<kernel_type> trainer;

	sample_type m;
	std::vector<sample_type> samples;
	std::vector<double> targets;

	// Let the user define the number of samples used for training
	int sampleSize = 0, inputSize = 0;
	cout << "Please enter the number of samples you want to use to train the model (Maximum number of samples: 1460)" << endl;
	cin >> inputSize;
	if (inputSize > 1460) {
		sampleSize = 1460;
		cout << "exceeded maximum number of samples. Sample size set to maximum" << endl;
	}
	else {
		sampleSize = inputSize;
	}

	//Get samples and targets from training set in memory
	for (int i = 0; i < sampleSize; i++) {

		m(0) = newDataSet[i].OverallQual;
		m(1) = newDataSet[i].GarageCars;
		m(2) = newDataSet[i].GrLivArea;
		samples.push_back(m);
		targets.push_back(newDataSet[i].SalePrice);
	}

	// Normalize data 
	dlib::vector_normalizer<sample_type> normalizer;
	normalizer.train(samples);
	for (unsigned long i = 0; i < samples.size(); ++i)
	{
		samples[i] = normalizer(samples[i]);
	}

	// Gamma value for radial_basis_kernel
	int setGamma = 0;
	cout << "Please enter 1 for computing Gamma by mean squared distance of samples or any other value to set Gamma to default: " << endl;
	cin >> setGamma;
	if (setGamma == 1) {
		const double gamma = 2.0 / compute_mean_squared_distance(samples);
		cout << "using gamma of " << gamma << endl;
		trainer.set_kernel(kernel_type(gamma));
	}
	else { cout << "default gamma" << endl; }
	
	// Epsilon value to set accuracy of training
	double Epsilon = 0.001;
	cout << "Please enter a value to set Epsilon in order to control accuracy of training (Default 0.001): "<<endl;
	cin >> Epsilon;
	cout << "using Epsilon of " << Epsilon << endl;
	trainer.set_epsilon(Epsilon);

	// train a function based on sample data
	cout << "training the model..." << endl;
	dlib::decision_function<kernel_type> df = trainer.train(samples, targets);

	// Perform 5-fold cross-validation and find the mean squared error and R-squared
	cout << "Performing 5-fold cross validation..." << endl;
	randomize_samples(samples, targets);
	cout << "MSE and R-Squared: " << cross_validate_regression_trainer(trainer, samples, targets, 5) << endl;

	// Create correct input data fromtest file in order to use training function
	cout << "Performing regression on test file:"<<endl;
	 
	std::vector<sample_type> testSamples;

	int numberTestProperties = newTestSet.size();

	for (int i = 0; i < numberTestProperties; i++)
	{
		m(0) = newTestSet[i].OverallQual;
		m(1) = newTestSet[i].GarageCars;
		m(2) = newTestSet[i].GrLivArea;

		testSamples.push_back(m);
	}

	// normalize test data
	normalizer.train(testSamples);
	for (unsigned long i = 0; i < testSamples.size(); ++i)
		testSamples[i] = normalizer(testSamples[i]);

	// Output test results from test file into Results.csv
	ofstream outputFile;
	outputFile.open("Results.csv");
	outputFile << "Id,SalePrice" << endl;

	for (int i = 0; i < numberTestProperties; i++) {
		outputFile << newTestSet[i].Id << "," << df(testSamples[i]) << endl;
	}

	cout << "Predicted Sale Prices are saved as Results.csv " << endl;
	cout << endl;
}



