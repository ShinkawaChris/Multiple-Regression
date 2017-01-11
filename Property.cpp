#include "stdafx.h"
#include "Property.h"


Property::Property()
{
}


Property::~Property()
{
}

void Property::convertId(string  newElement)
{
	if (newElement == "NA") { Id = 0; }
	else { Id = stoi(newElement); }
}

void Property::convertMSSubClass(string  newElement)
{
	if (newElement == "NA") { MSSubClass = 0; }
	else { MSSubClass = stoi(newElement); }
}

void Property::convertMSZoning(string  newElement)
{
		if (newElement == "A") { MSZoning = 1; }
		else if (newElement == "C (all)") { MSZoning = 2; }
		else if (newElement == "FV") { MSZoning = 3; }
		else if (newElement == "I") { MSZoning = 4; }
		else if (newElement == "RH") { MSZoning = 5; }
		else if (newElement == "RL") { MSZoning = 6; }
		else if (newElement == "RP") { MSZoning = 7; }
		else if (newElement == "RM") { MSZoning = 8; }
		else { MSZoning = -1000; }

}

void Property::convertLotFrontage(string  newElement)
{
	if (newElement == "NA") { LotFrontage = 0; }
	else { LotFrontage = stoi(newElement); }
}

void Property::convertLotArea(string newElement)
{
	if (newElement == "NA") { LotArea = 0; }
	else { LotArea = stoi(newElement); }
}

void Property::convertStreet(string  newElement)
{
	if (newElement == "NA") { Street = 0; }
	else if (newElement == "Grvl") { Street = 1; }
	else if (newElement == "Pave") { Street = 2; }
	else { Street = -1000; }
}

void Property::convertAlley(string  newElement)
{
	if (newElement == "Grvl") { Alley = 1; }
	else if (newElement == "Pave") { Alley = 2; }
	else if (newElement == "NA") { Alley = 3; }
	else { Alley = -1000; }
}

void Property::convertLotShape(string  newElement)
{
	if (newElement == "NA") { LotShape = 0; }
	else if (newElement == "Reg") { LotShape = 1; }
	else if (newElement == "IR1") { LotShape = 2; }
	else if (newElement == "IR2") { LotShape = 3; }
	else if (newElement == "IR3") { LotShape = 4; }
	else { LotShape = -1000; }
}

void Property::convertLandContour(string  newElement)
{
	if (newElement == "NA") { LandContour = 0; }
	else if (newElement == "Lvl") { LandContour = 1; }
	else if (newElement == "Bnk") { LandContour = 2; }
	else if (newElement == "HLS") { LandContour = 3; }
	else if (newElement == "Low") { LandContour = 4; }
	else { LandContour = -1000; }
}

void Property::convertUtilities(string  newElement)
{
	if (newElement == "NA") { Utilities = 0; }
	else if (newElement == "AllPub") { Utilities = 1; }
	else if (newElement == "NoSewr") { Utilities = 2; }
	else if (newElement == "NoSeWa") { Utilities = 3; }
	else if (newElement == "ELO") { Utilities = 4; }
	else { Utilities = -1000; }
}

void Property::convertLotConfig(string  newElement)
{
	if (newElement == "NA") { LotConfig = 0; }
	else if (newElement == "Inside") { LotConfig = 1; }
	else if (newElement == "Corner") { LotConfig = 2; }
	else if (newElement == "CulDSac") { LotConfig = 3; }
	else if (newElement == "FR2") { LotConfig = 4; }
	else if (newElement == "FR3") { LotConfig = 5; }
	else { LotConfig = -1000; }
}

void Property::convertLandSlope(string  newElement)
{
	if (newElement == "NA") { LandSlope = 0; }
	else if (newElement == "Gtl") { LandSlope = 1; }
	else if (newElement == "Mod") { LandSlope = 2; }
	else if (newElement == "Sev") { LandSlope = 3; }
	else { LandSlope = -1000; }
}

void Property::convertNeighborhood(string  newElement)
{
	if (newElement == "NA") { Neighborhood = 0; }
	else if (newElement == "Blmngtn") { Neighborhood = 1; }
	else if (newElement == "Blueste") { Neighborhood = 2; }
	else if (newElement == "BrDale") { Neighborhood = 3; }
	else if (newElement == "BrkSide") { Neighborhood = 4; }
	else if (newElement == "ClearCr") { Neighborhood = 5; }
	else if (newElement == "CollgCr") { Neighborhood = 6; }
	else if (newElement == "Crawfor") { Neighborhood = 7; }
	else if (newElement == "Edwards") { Neighborhood = 8; }
	else if (newElement == "Gilbert") { Neighborhood = 9; }
	else if (newElement == "IDOTRR") { Neighborhood = 10; }
	else if (newElement == "MeadowV") { Neighborhood = 11; }
	else if (newElement == "Mitchel") { Neighborhood = 12; }
	else if (newElement == "NAmes") { Neighborhood = 13; }
	else if (newElement == "NoRidge") { Neighborhood = 14; }
	else if (newElement == "NPkVill") { Neighborhood = 15; }
	else if (newElement == "NridgHt") { Neighborhood = 16; }
	else if (newElement == "NWAmes") { Neighborhood = 17; }
	else if (newElement == "OldTown") { Neighborhood = 18; }
	else if (newElement == "SWISU") { Neighborhood = 19; }
	else if (newElement == "Sawyer") { Neighborhood = 20; }
	else if (newElement == "SawyerW") { Neighborhood = 21; }
	else if (newElement == "Somerst") { Neighborhood = 22; }
	else if (newElement == "StoneBr") { Neighborhood = 23; }
	else if (newElement == "Timber") { Neighborhood = 24; }
	else if (newElement == "Veenker") { Neighborhood = 25; }
	else { Neighborhood = -1000; }
}

void Property::convertCondition1(string  newElement)
{
	if (newElement == "NA") { Condition1 = 0; }
	else if (newElement == "Artery") { Condition1 = 1; }
	else if (newElement == "Feedr") { Condition1 = 2; }
	else if (newElement == "Norm") { Condition1 = 3; }
	else if (newElement == "RRNn") { Condition1 = 4; }
	else if (newElement == "RRAn") { Condition1 = 5; }
	else if (newElement == "PosN") { Condition1 = 6; }
	else if (newElement == "PosA") { Condition1 = 7; }
	else if (newElement == "RRNe") { Condition1 = 8; }
	else if (newElement == "RRAe") { Condition1 = 9; }
	else { Condition1 = -1000; }
}

void Property::convertCondition2(string  newElement)
{
	if (newElement == "NA") { Condition2 = 0; }
	else if (newElement == "Artery") { Condition2 = 1; }
	else if (newElement == "Feedr") { Condition2 = 2; }
	else if (newElement == "Norm") { Condition2 = 3; }
	else if (newElement == "RRNn") { Condition2 = 4; }
	else if (newElement == "RRAn") { Condition2 = 5; }
	else if (newElement == "PosN") { Condition2 = 6; }
	else if (newElement == "PosA") { Condition2 = 7; }
	else if (newElement == "RRNe") { Condition2 = 8; }
	else if (newElement == "RRAe") { Condition2 = 9; }
	else { Condition2 = -1000; }
}

void Property::convertBldgType(string  newElement)
{
	if (newElement == "NA") { BldgType = 0; }
	else if (newElement == "1Fam") { BldgType = 1; }
	else if (newElement == "2fmCon") { BldgType = 2; }
	else if (newElement == "Duplex") { BldgType = 3; }
	else if (newElement == "TwnhsE") { BldgType = 4; }
	else if (newElement == "TwnhsI") { BldgType = 5; }
	else if (newElement == "Twnhs") { BldgType = 6; }
	else { BldgType = -1000; }
}

void Property::convertHouseStyle(string  newElement)
{
	if (newElement == "NA") { HouseStyle = 0; }
	else if (newElement == "1Story") { HouseStyle = 1; }
	else if (newElement == "1.5Fin") { HouseStyle = 2; }
	else if (newElement == "1.5Unf") { HouseStyle = 3; }
	else if (newElement == "2Story") { HouseStyle = 4; }
	else if (newElement == "2.5Fin") { HouseStyle = 5; }
	else if (newElement == "2.5Unf") { HouseStyle = 6; }
	else if (newElement == "SFoyer") { HouseStyle = 7; }
	else if (newElement == "SLvl") { HouseStyle = 8; }
	else { HouseStyle = -1000; }
}

void Property::convertOverallQual(string  newElement)
{
	if (newElement == "NA") { Id = 0; }
	else { OverallQual = stoi(newElement); }
}

void Property::convertOverallCond(string  newElement)
{
	if (newElement == "NA") { OverallCond = 0; }
	else { OverallCond = stoi(newElement); }
}

void Property::convertYearBuilt(string  newElement)
{
	if (newElement == "NA") { YearBuilt = 0; }
	else { YearBuilt = stoi(newElement); }
}

void Property::convertYearRemodAdd(string  newElement)
{
	if (newElement == "NA") { YearRemodAdd = 0; }
	else { YearRemodAdd = stoi(newElement); }
}

void Property::convertRoofStyle(string  newElement)
{
	if (newElement == "NA") { RoofStyle = 0; }
	else if (newElement == "Flat") { RoofStyle = 1; }
	else if (newElement == "Gable") { RoofStyle = 2; }
	else if (newElement == "Gambrel") { RoofStyle = 3; }
	else if (newElement == "Hip") { RoofStyle = 4; }
	else if (newElement == "Mansard") { RoofStyle = 5; }
	else if (newElement == "Shed") { RoofStyle = 6; }
	else { RoofStyle = -1000; }
}

void Property::convertRoofMatl(string  newElement)
{
	if (newElement == "NA") { RoofMatl = 0; }
	else if (newElement == "ClyTile") { RoofMatl = 1; }
	else if (newElement == "CompShg") { RoofMatl = 2; }
	else if (newElement == "Membran") { RoofMatl = 3; }
	else if (newElement == "Metal") { RoofMatl = 4; }
	else if (newElement == "Roll") { RoofMatl = 5; }
	else if (newElement == "Tar&Grv") { RoofMatl = 6; }
	else if (newElement == "WdShake") { RoofMatl = 7; }
	else if (newElement == "WdShngl") { RoofMatl = 8; }
	else { RoofMatl = -1000; }

}

void Property::convertExterior1st(string  newElement)
{
	if (newElement == "NA") { Exterior1st = 0; }
	else if (newElement == "AsbShng") { Exterior1st = 1; }
	else if (newElement == "AsphShn") { Exterior1st = 2; }
	else if (newElement == "BrkFace") { Exterior1st = 3; }
	else if (newElement == "CBlock") { Exterior1st = 4; }
	else if (newElement == "CemntBd") { Exterior1st = 5; }
	else if (newElement == "HdBoard") { Exterior1st = 6; }
	else if (newElement == "ImStucc") { Exterior1st = 7; }
	else if (newElement == "MetalSd") { Exterior1st = 8; }
	else if (newElement == "Other") { Exterior1st = 9; }
	else if (newElement == "Plywood") { Exterior1st = 10; }
	else if (newElement == "PreCast") { Exterior1st = 11; }
	else if (newElement == "Stone") { Exterior1st = 12; }
	else if (newElement == "Stucco") { Exterior1st = 13; }
	else if (newElement == "VinylSd") { Exterior1st = 14; }
	else if (newElement == "Wd Sdng") { Exterior1st = 15; }
	else if (newElement == "WdShing") { Exterior1st = 16; }
	else if (newElement == "BrkComm") { Exterior1st = 17; }
	else if (newElement == "Wd shng") { Exterior1st = 18; }
	else if (newElement == "CmentBd") { Exterior1st = 5; }
	else { Exterior1st = -1000; }
}

void Property::convertExterior2nd(string  newElement)
{
	if (newElement == "NA") { Exterior2nd = 0; }
	else if (newElement == "AsbShng") { Exterior2nd = 1; }
	else if (newElement == "AsphShn") { Exterior2nd = 2; }
	else if (newElement == "BrkFace") { Exterior2nd = 3; }
	else if (newElement == "CBlock") { Exterior2nd = 4; }
	else if (newElement == "CementBd") { Exterior2nd = 5; }
	else if (newElement == "HdBoard") { Exterior2nd = 6; }
	else if (newElement == "ImStucc") { Exterior2nd = 7; }
	else if (newElement == "MetalSd") { Exterior2nd = 8; }
	else if (newElement == "Other") { Exterior2nd = 9; }
	else if (newElement == "Plywood") { Exterior2nd = 10; }
	else if (newElement == "PreCast") { Exterior2nd = 11; }
	else if (newElement == "Stone") { Exterior2nd = 12; }
	else if (newElement == "Stucco") { Exterior2nd = 13; }
	else if (newElement == "VinylSd") { Exterior2nd = 14; }
	else if (newElement == "Wd Sdng") { Exterior2nd = 15; }
	else if (newElement == "WdShing") { Exterior2nd = 16; }
	else if (newElement == "BrkComm") { Exterior2nd = 17; }
	else if (newElement == "Wd Shng") { Exterior2nd = 18; }
	else if (newElement == "CmentBd") { Exterior2nd = 5; }
	else if (newElement == "Brk Cmn") { Exterior2nd = 17; }
	else { Exterior2nd = -1000; }
}

void Property::convertMasVnrType(string  newElement)
{
	if (newElement == "NA") { MasVnrType = 0; }
	else if (newElement == "BrkCmn") { MasVnrType = 1; }
	else if (newElement == "BrkFace") { MasVnrType = 2; }
	else if (newElement == "CBlock") { MasVnrType = 3; }
	else if (newElement == "None") { MasVnrType = 4; }
	else if (newElement == "Stone") { MasVnrType = 5; }
	else { MasVnrType = -1000; }
}

void Property::convertMasVnrArea(string  newElement)
{
	if (newElement == "NA") { MasVnrArea = 0; }
	else MasVnrArea = stoi(newElement);
}

void Property::convertExterQual(string  newElement)
{
	if (newElement == "NA") { ExterQual = 0; }
	else if (newElement == "Ex") { ExterQual = 1; }
	else if (newElement == "Gd") { ExterQual = 2; }
	else if (newElement == "TA") { ExterQual = 3; }
	else if (newElement == "Fa") { ExterQual = 4; }
	else if (newElement == "Po") { ExterQual = 5; }
	else { ExterQual = -1000; }
}

void Property::convertExterCond(string  newElement)
{
	if (newElement == "NA") { ExterCond = 0; }
	else if (newElement == "Ex") { ExterCond = 1; }
	else if (newElement == "Gd") { ExterCond = 2; }
	else if (newElement == "TA") { ExterCond = 3; }
	else if (newElement == "Fa") { ExterCond = 4; }
	else if (newElement == "Po") { ExterCond = 5; }
	else { ExterCond = -1000; }
}

void Property::convertFoundation(string  newElement)
{
	if (newElement == "NA") { Foundation = 0; }
	else if (newElement == "BrkTil") { Foundation = 1; }
	else if (newElement == "CBlock") { Foundation = 2; }
	else if (newElement == "PConc") { Foundation = 3; }
	else if (newElement == "Slab") { Foundation = 4; }
	else if (newElement == "Stone") { Foundation = 5; }
	else if (newElement == "Wood") { Foundation = 6; }
	else { Foundation = -1000; }
}

void Property::convertBsmtQual(string  newElement)
{
	if (newElement == "NA") { BsmtQual = 0; }
	else if (newElement == "Ex") { BsmtQual = 1; }
	else if (newElement == "Gd") { BsmtQual = 2; }
	else if (newElement == "TA") { BsmtQual = 3; }
	else if (newElement == "Fa") { BsmtQual = 4; }
	else if (newElement == "Po") { BsmtQual = 5; }
	else { BsmtQual = -1000; }
}

void Property::convertBsmtCond(string  newElement)
{
	if (newElement == "NA") { BsmtCond = 0; }
	else if (newElement == "Ex") { BsmtCond = 1; }
	else if (newElement == "Gd") { BsmtCond = 2; }
	else if (newElement == "TA") { BsmtCond = 3; }
	else if (newElement == "Fa") { BsmtCond = 4; }
	else if (newElement == "Po") { BsmtCond = 5; }
	else { BsmtCond = -1000; }
}

void Property::convertBsmtExposure(string  newElement)
{
	if (newElement == "NA") { BsmtExposure = 0; }
	else if (newElement == "Gd") { BsmtExposure = 1; }
	else if (newElement == "Av") { BsmtExposure = 2; }
	else if (newElement == "Mn") { BsmtExposure = 3; }
	else if (newElement == "No") { BsmtExposure = 4; }
	else { BsmtExposure = -1000; }

}

void Property::convertBsmtFinType1(string  newElement)
{
	if (newElement == "NA") { BsmtFinType1 = 0; }
	else if (newElement == "GLQ") { BsmtFinType1 = 1; }
	else if (newElement == "ALQ") { BsmtFinType1 = 2; }
	else if (newElement == "BLQ") { BsmtFinType1 = 3; }
	else if (newElement == "Rec") { BsmtFinType1 = 4; }
	else if (newElement == "LwQ") { BsmtFinType1 = 5; }
	else if (newElement == "Unf") { BsmtFinType1 = 6; }
	else { BsmtFinType1 = -1000; }

}

void Property::convertBsmtFinSF1(string  newElement)
{
	if (newElement == "NA") { BsmtFinSF1 = 0; }
	else { BsmtFinSF1 = stoi(newElement); }
}

void Property::convertBsmtFinType2(string  newElement)
{
	if (newElement == "NA") { BsmtFinType2 = 0; }
	else if (newElement == "GLQ") { BsmtFinType2 = 1; }
	else if (newElement == "ALQ") { BsmtFinType2 = 2; }
	else if (newElement == "BLQ") { BsmtFinType2 = 3; }
	else if (newElement == "Rec") { BsmtFinType2 = 4; }
	else if (newElement == "LwQ") { BsmtFinType2 = 5; }
	else if (newElement == "Unf") { BsmtFinType2 = 6; }
	else { BsmtFinType2 = -1000; }
}

void Property::convertBsmtFinSF2(string  newElement)
{
	if (newElement == "NA") { BsmtFinSF2 = 0; }
	else { BsmtFinSF2 = stoi(newElement); }
}

void Property::convertBsmtUnfSF(string newElement)
{
	if (newElement == "NA") { BsmtUnfSF = 0; }
	else { BsmtUnfSF = stoi(newElement); }
}

void Property::convertTotalBsmtSF(string  newElement)
{
	if (newElement == "NA") { TotalBsmtSF = 0; }
	else { TotalBsmtSF = stoi(newElement); }
}

void Property::convertHeating(string  newElement)
{
	if (newElement == "NA") { Heating = 0; }
	else if (newElement == "Floor") { Heating = 1; }
	else if (newElement == "GasA") { Heating = 2; }
	else if (newElement == "GasW") { Heating = 3; }
	else if (newElement == "Grav") { Heating = 4; }
	else if (newElement == "OthW") { Heating = 5; }
	else if (newElement == "Wall") { Heating = 6; }
	else { Heating = -1000; }
}

void Property::convertHeatingQC(string  newElement)
{
	if (newElement == "NA") { HeatingQC = 0; }
	else if (newElement == "Ex") { HeatingQC = 1; }
	else if (newElement == "Gd") { HeatingQC = 2; }
	else if (newElement == "TA") { HeatingQC = 3; }
	else if (newElement == "Fa") { HeatingQC = 4; }
	else if (newElement == "Po") { HeatingQC = 5; }
	else { HeatingQC= -1000; }

}

void Property::convertCentralAir(string  newElement)
{
	if (newElement == "NA") { CentralAir = 0; }
	else if (newElement == "N") { CentralAir = 1; }
	else if (newElement == "Y") { CentralAir = 2; }

}

void Property::convertElectrical(string  newElement)
{
	if (newElement == "NA") { Electrical = 0; }
	else if (newElement == "SBrkr") { Electrical = 1; }
	else if (newElement == "FuseA") { Electrical = 2; }
	else if (newElement == "FuseF") { Electrical = 3; }
	else if (newElement == "FuseP") { Electrical = 4; }
	else if (newElement == "Mix") { Electrical = 5; }
	else { Electrical = -1000; }
}

void Property::convertFirstFlrSF(string  newElement)
{
	if (newElement == "NA") { FirstFlrSF = 0; }
	else { FirstFlrSF = stoi(newElement); }
}

void Property::convertSecndFlrSF(string  newElement)
{
	if (newElement == "NA") { SecndFlrSF = 0; }
	else { SecndFlrSF = stoi(newElement); }
}

void Property::convertLowQualFinSF(string  newElement)
{
	if (newElement == "NA") { LowQualFinSF = 0; }
	else { LowQualFinSF = stoi(newElement); }
}

void Property::convertGrLivArea(string  newElement)
{
	if (newElement == "NA") { GrLivArea = 0; }
	else { GrLivArea = stoi(newElement); }
}

void Property::convertBsmtFullBath(string  newElement)
{
	if (newElement == "NA") { BsmtFullBath = 0; }
	else { BsmtFullBath = stoi(newElement); }
}

void Property::convertBsmtHalfBath(string  newElement)
{
	if (newElement == "NA") { BsmtHalfBath = 0; }
	else { BsmtHalfBath = stoi(newElement); }
}

void Property::convertFullBath(string  newElement)
{
	if (newElement == "NA") { FullBath = 0; }
	else { FullBath = stoi(newElement); }
}

void Property::convertHalfBath(string  newElement)
{
	if (newElement == "NA") { HalfBath = 0; }
	else { HalfBath = stoi(newElement); }
}

void Property::convertBedroomAbvGr(string  newElement)
{
	if (newElement == "NA") { BedroomAbvGr = 0; }
	else { BedroomAbvGr = stoi(newElement); }
}

void Property::convertKitchenAbvGr(string  newElement)
{
	if (newElement == "NA") { KitchenAbvGr = 0; }
	else { KitchenAbvGr = stoi(newElement); }
}

void Property::convertKitchenQual(string  newElement)
{
	if (newElement == "NA") { KitchenQual = 0; }
	else if (newElement == "Ex") { KitchenQual = 1; }
	else if (newElement == "Gd") { KitchenQual = 2; }
	else if (newElement == "TA") { KitchenQual = 3; }
	else if (newElement == "Fa") { KitchenQual = 4; }
	else if (newElement == "Po") { KitchenQual = 5; }
	else { KitchenQual = -1000; }
}

void Property::convertTotRmsAbvGrd(string  newElement)
{
	if (newElement == "NA") { TotRmsAbvGrd = 0; }
	else { TotRmsAbvGrd = stoi(newElement); }
}

void Property::convertFunctional(string  newElement)
{
	if (newElement == "NA") { Functional = 0; }
	else if (newElement == "Typ") { Functional = 1; }
	else if (newElement == "Min1") { Functional = 2; }
	else if (newElement == "Min2") { Functional = 3; }
	else if (newElement == "Mod") { Functional = 4; }
	else if (newElement == "Maj1") { Functional = 5; }
	else if (newElement == "Maj2") { Functional = 6; }
	else if (newElement == "Sev") { Functional = 7; }
	else if (newElement == "Sal") { Functional = 8; }
	else { Functional = -1000; }
}

void Property::convertFireplaces(string  newElement)
{
	if (newElement == "NA") { Fireplaces = 0; }
	else { Fireplaces = stoi(newElement); }
}

void Property::convertFireplaceQu(string  newElement)
{
	if (newElement == "NA") { FireplaceQu = 0; }
	else if (newElement == "Ex") { FireplaceQu = 1; }
	else if (newElement == "Gd") { FireplaceQu = 2; }
	else if (newElement == "TA") { FireplaceQu = 3; }
	else if (newElement == "Fa") { FireplaceQu = 4; }
	else if (newElement == "Po") { FireplaceQu = 5; }
	else { FireplaceQu = -1000; }
}

void Property::convertGarageType(string  newElement)
{
	if (newElement == "NA") { GarageType = 0; }
	else if (newElement == "2Types") { GarageType = 1; }
	else if (newElement == "Attchd") { GarageType = 2; }
	else if (newElement == "Basment") { GarageType = 3; }
	else if (newElement == "BuiltIn") { GarageType = 4; }
	else if (newElement == "CarPort") { GarageType = 5; }
	else if (newElement == "Detchd") { GarageType = 5; }
	else { GarageType = -1000; }
}

void Property::convertGarageYrBlt(string  newElement)
{
	if (newElement == "NA") { GarageYrBlt = 0; }
	else { GarageYrBlt = stoi(newElement); }
}

void Property::convertGarageFinish(string  newElement)
{
	if (newElement == "NA") { GarageFinish = 0; }
	else if (newElement == "Fin") { GarageFinish = 1; }
	else if (newElement == "RFn") { GarageFinish = 2; }
	else if (newElement == "Unf") { GarageFinish = 3; }
}

void Property::convertGarageCars(string  newElement)
{
	if (newElement == "NA") { GarageCars = 0; }
	else { GarageCars = stoi(newElement); }
}

void Property::convertGarageArea(string newElement)
{
	if (newElement == "NA") { GarageArea = 0; }
	else { GarageArea = stoi(newElement); }
}

void Property::convertGarageQual(string  newElement)
{
	if (newElement == "NA") { GarageQual = 0; }
	else if (newElement == "Ex") { GarageQual = 1; }
	else if (newElement == "Gd") { GarageQual = 2; }
	else if (newElement == "TA") { GarageQual = 3; }
	else if (newElement == "Fa") { GarageQual = 4; }
	else if (newElement == "Po") { GarageQual = 5; }
	else { GarageQual = -1000; }
}

void Property::convertGarageCond(string  newElement)
{
	if (newElement == "NA") { GarageCond = 0; }
	else if (newElement == "Ex") { GarageCond = 1; }
	else if (newElement == "Gd") { GarageCond = 2; }
	else if (newElement == "TA") { GarageCond = 3; }
	else if (newElement == "Fa") { GarageCond = 4; }
	else if (newElement == "Po") { GarageCond = 5; }
	else { GarageCond = -1000; }
}

void Property::convertPavedDrive(string  newElement)
{
	if (newElement == "NA") { PavedDrive = 0; }
	else if (newElement == "Y") { PavedDrive = 1; }
	else if (newElement == "P") { PavedDrive = 2; }
	else if (newElement == "N") { PavedDrive = 3; }
	else { PavedDrive = -1000; }
}

void Property::convertWoodDeckSF(string newElement)
{
	if (newElement == "NA") { WoodDeckSF = 0; }
	else { WoodDeckSF = stoi(newElement); }
}

void Property::convertOpenPorchSF(string  newElement)
{
	if (newElement == "NA") { OpenPorchSF = 0; }
	else { OpenPorchSF = stoi(newElement); }
}

void Property::convertEnclosedPorch(string newElement)
{
	if (newElement == "NA") { EnclosedPorch = 0; }
	else { EnclosedPorch = stoi(newElement); }

}

void Property::convertSsnPorch(string newElement)
{
	if (newElement == "NA") { SsnPorch = 0; }
	else { SsnPorch = stoi(newElement); }
}

void Property::convertScreenPorch(string newElement)
{
	if (newElement == "NA") { ScreenPorch = 0; }
	else { ScreenPorch = stoi(newElement); }
}

void Property::convertPoolArea(string  newElement)
{
	if (newElement == "NA") { PoolArea = 0; }
	else { PoolArea = stoi(newElement); }
}

void Property::convertPoolQC(string  newElement)
{
	if (newElement == "NA") { PoolQC = 0; }
	else if (newElement == "Ex") { PoolQC = 1; }
	else if (newElement == "Gd") { PoolQC = 2; }
	else if (newElement == "TA") { PoolQC = 3; }
	else if (newElement == "Fa") { PoolQC = 4; }
	else if (newElement == "Po") { PoolQC = 5; }
	else { PoolQC = -1000; }
}

void Property::convertFence(string  newElement)
{
	if (newElement == "NA") { Fence = 0; }
	else if (newElement == "GdPrv") { Fence = 1; }
	else if (newElement == "MnPrv") { Fence = 2; }
	else if (newElement == "GdWo") { Fence = 3; }
	else if (newElement == "MnWw") { Fence = 4; }
	else { Fence = -1000; }
	
}

void Property::convertMiscFeature(string  newElement)
{
	if (newElement == "NA") { MiscFeature = 0; }
	else if (newElement == "Elev") { MiscFeature = 1; }
	else if (newElement == "Gar2") { MiscFeature = 2; }
	else if (newElement == "Othr") { MiscFeature = 3; }
	else if (newElement == "Shed") { MiscFeature = 4; }
	else if (newElement == "TenC") { MiscFeature = 5; }
	else { MiscFeature = -1000; }
}

void Property::convertMiscVal(string  newElement)
{
	if (newElement == "NA") { MiscVal = 0; }
	else { MiscVal = stoi(newElement); }
}

void Property::convertMoSold(string newElement)
{
	if (newElement == "NA") { MoSold = 0; }
	else { MoSold = stoi(newElement); }
}

void Property::convertYrSold(string  newElement)
{
	if (newElement == "NA") {YrSold = 0; }
	else { YrSold = stoi(newElement); }
}

void Property::convertSaleType(string  newElement)
{
	if (newElement == "NA") { SaleType = 0; }
	else if (newElement == "WD") { SaleType = 1; }
	else if (newElement == "CWD") { SaleType = 2; }
	else if (newElement == "VWD") { SaleType = 3; }
	else if (newElement == "New") { SaleType = 4; }
	else if (newElement == "COD") { SaleType = 5; }
	else if (newElement == "Con") { SaleType = 6; }
	else if (newElement == "ConLw") { SaleType = 7; }
	else if (newElement == "ConLI") { SaleType = 8; }
	else if (newElement == "ConLD") { SaleType = 9; }
	else if (newElement == "Oth") { SaleType = 10; }
	else { SaleType = -1000; }
}

void Property::convertSaleCondition(string  newElement)
{
	if (newElement == "NA") { SaleCondition = 0; }
	else if (newElement == "Normal") { SaleCondition = 1; }
	else if (newElement == "Abnorml") { SaleCondition = 2; }
	else if (newElement == "AdjLand") { SaleCondition = 3; }
	else if (newElement == "Alloca") { SaleCondition = 4; }
	else if (newElement == "Family") { SaleCondition = 5; }
	else if (newElement == "Partial") { SaleCondition = 6; }
	else { SaleCondition = -1000; }
}

void Property::convertSalePrice(string newElement)
{
	if (newElement == "NA") { SalePrice = 0; }
	else { SalePrice = stoi(newElement); }
}