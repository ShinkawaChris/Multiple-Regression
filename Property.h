#include <iostream>
#include <string>

using namespace std;

class Property
{
public:

	int Id, MSSubClass, MSZoning, LotFrontage, LotArea, Street, Alley, LotShape, LandContour, Utilities,
		LotConfig, LandSlope, Neighborhood, Condition1, Condition2, BldgType, HouseStyle, OverallQual,
		OverallCond, YearBuilt, YearRemodAdd, RoofStyle, RoofMatl, Exterior1st, Exterior2nd, MasVnrType,
		MasVnrArea, ExterQual, ExterCond, Foundation, BsmtQual, BsmtCond, BsmtExposure, BsmtFinType1,
		BsmtFinSF1, BsmtFinType2, BsmtFinSF2, BsmtUnfSF, TotalBsmtSF, Heating, HeatingQC, CentralAir,
		Electrical, FirstFlrSF, SecndFlrSF, LowQualFinSF, GrLivArea, BsmtFullBath, BsmtHalfBath, FullBath,
		HalfBath, BedroomAbvGr, KitchenAbvGr, KitchenQual, TotRmsAbvGrd, Functional, Fireplaces, FireplaceQu,
		GarageType, GarageYrBlt, GarageFinish, GarageCars, GarageArea, GarageQual, GarageCond, PavedDrive,
		WoodDeckSF, OpenPorchSF, EnclosedPorch, SsnPorch, ScreenPorch, PoolArea, PoolQC, Fence, MiscFeature,
		MiscVal, MoSold, YrSold, SaleType, SaleCondition, SalePrice;


	Property();
	~Property();

	void convertId(string newElement);
	void convertMSSubClass(string newElement);
	void convertMSZoning(string newElement);
	void convertLotFrontage(string newElement);
	void convertLotArea(string newElement);
	void convertStreet(string newElement);
	void convertAlley(string newElement);
	void convertLotShape(string newElement);
	void convertLandContour(string newElement);
	void convertUtilities(string newElement);
	void convertLotConfig(string newElement);
	void convertLandSlope(string newElement);
	void convertNeighborhood(string newElement);
	void convertCondition1(string newElement);
	void convertCondition2(string newElement);
	void convertBldgType(string newElement);
	void convertHouseStyle(string newElement);
	void convertOverallQual(string newElement);
	void convertOverallCond(string newElement);
	void convertYearBuilt(string newElement);
	void convertYearRemodAdd(string newElement);
	void convertRoofStyle(string newElement);
	void convertRoofMatl(string newElement);
	void convertExterior1st(string newElement);
	void convertExterior2nd(string newElement);
	void convertMasVnrType(string newElement);
	void convertMasVnrArea(string newElement);
	void convertExterQual(string newElement);
	void convertExterCond(string newElement);
	void convertFoundation(string newElement);
	void convertBsmtQual(string newElement);
	void convertBsmtCond(string newElement);
	void convertBsmtExposure(string newElement);
	void convertBsmtFinType1(string newElement);
	void convertBsmtFinSF1(string newElement);
	void convertBsmtFinType2(string newElement);
	void convertBsmtFinSF2(string newElement);
	void convertBsmtUnfSF(string newElement);
	void convertTotalBsmtSF(string newElement);
	void convertHeating(string newElement);
	void convertHeatingQC(string newElement);
	void convertCentralAir(string newElement);
	void convertElectrical(string newElement);
	void convertFirstFlrSF(string newElement);
	void convertSecndFlrSF(string newElement);
	void convertLowQualFinSF(string newElement);
	void convertGrLivArea(string newElement);
	void convertBsmtFullBath(string newElement);
	void convertBsmtHalfBath(string newElement);
	void convertFullBath(string newElement);
	void convertHalfBath(string newElement);
	void convertBedroomAbvGr(string newElement);
	void convertKitchenAbvGr(string newElement);
	void convertKitchenQual(string newElement);
	void convertTotRmsAbvGrd(string newElement);
	void convertFunctional(string newElement);
	void convertFireplaces(string newElement);
	void convertFireplaceQu(string newElement);
	void convertGarageType(string newElement);
	void convertGarageYrBlt(string newElement);
	void convertGarageFinish(string newElement);
	void convertGarageCars(string newElement);
	void convertGarageArea(string newElement);
	void convertGarageQual(string newElement);
	void convertGarageCond(string newElement);
	void convertPavedDrive(string newElement);
	void convertWoodDeckSF(string newElement);
	void convertOpenPorchSF(string newElement);
	void convertEnclosedPorch(string newElement);
	void convertSsnPorch(string newElement);
	void convertScreenPorch(string newElement);
	void convertPoolArea(string newElement);
	void convertPoolQC(string newElement);
	void convertFence(string newElement);
	void convertMiscFeature(string newElement);
	void convertMiscVal(string newElement);
	void convertMoSold(string newElement);
	void convertYrSold(string newElement);
	void convertSaleType(string newElement);
	void convertSaleCondition(string newElement);
	void convertSalePrice(string newElement);
};