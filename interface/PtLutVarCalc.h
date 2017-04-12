
int CalcTrackTheta( const int th1, const int th2, const int th3, const int th4,
                    const int ring1, const int mode, const bool BIT_COMP=false );

void CalcDeltaPhis( int& dPh12, int& dPh13, int& dPh14, int& dPh23, int& dPh24, int& dPh34, int& dPhSign,
		    int& dPhSum4, int& dPhSum4A, int& dPhSum3, int& dPhSum3A, int& outStPh,
		    const int ph1, const int ph2, const int ph3, const int ph4, const int mode, const bool BIT_COMP=false );

void CalcDeltaThetas( int& dTh12, int& dTh13, int& dTh14, int& dTh23, int& dTh24, int& dTh34,
		      const int th1, const int th2, const int th3, const int th4, const int mode, const bool BIT_COMP=false );

void CalcBends( int& bend1, int& bend2, int& bend3, int& bend4,
		const int pat1, const int pat2, const int pat3, const int pat4,
		const int dPhSign, const int endcap, const int mode, const bool BIT_COMP=false );

int CalcBendFromPattern( const int pattern, const int endcap );


