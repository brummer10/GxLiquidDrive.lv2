// generated from file './/liquiddrive.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace liquiddrive {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip1 __rt_data = {
	0.0,0.769813131784,101.97,100, {
	0.0,0.00603015075255,0.0180904522575,0.0301507537617,0.0422110552649,0.0542713567661,
	0.0663316582644,0.0783919597583,0.0904522612455,0.102512562723,0.114572864185,
	0.126633165625,0.138693467031,0.150753768388,0.162814069669,0.174874370839,
	0.186934671842,0.198994972595,0.211055272974,0.223115572796,0.235175871782,
	0.247236169522,0.259296465397,0.271356758486,0.283417047408,0.295477330103,
	0.307537603488,0.319597862958,0.331658101628,0.343718309203,0.3557784703,
	0.367838561921,0.379898549689,0.391958382223,0.404017982724,0.416077236409,
	0.428135971741,0.440193932392,0.452250735407,0.464305808797,0.476358298572,
	0.488406930473,0.500449804845,0.512484093473,0.52450559405,0.536508081033,
	0.548482372001,0.560415011246,0.572286469833,0.58406880165,0.595722828331,
	0.607195223197,0.618416376286,0.629300558395,0.639750242256,0.64966571619,
	0.658958839532,0.667566864631,0.675461119451,0.682647579023,0.689160379535,
	0.695051977325,0.700383596623,0.705217971535,0.709614777857,0.713628274534,
	0.717306443498,0.720691011494,0.723817922022,0.726717991172,0.729417598864,
	0.731939341041,0.734302611159,0.736524102405,0.738618233494,0.740597505834,
	0.742472801431,0.744253630739,0.745948338779,0.747564276749,0.749107945186,
	0.750585113719,0.752000921552,0.753359962067,0.754666354304,0.755923803588,
	0.757135653112,0.758304928018,0.759434373175,0.760526485687,0.761583542953,
	0.762607626974,0.763600645475,0.76456435032,0.765500353613,0.766410141819,
	0.767295088185,0.768156463695,0.768995446755,0.769813131784
	}
};

static table1d_imp<100> clip2 __rt_data = {
	0.0,0.394515179396,101.97,100, {
	0.0,0.00603015075129,0.0180904522522,0.0301507537469,0.0422110552265,0.0542713566722,
	0.0663316580417,0.0783919592408,0.0904522600592,0.102512560027,0.114572858094,
	0.126633151913,0.13869343624,0.15075369936,0.162813915089,0.174874024928,
	0.18693389817,0.198993242803,0.21105140661,0.223106933614,0.235156577432,
	0.247193118816,0.259200598174,0.271144190587,0.282950034925,0.294470641721,
	0.305445189377,0.315505844416,0.324302375812,0.331685149347,0.337749693783,
	0.34272268487,0.34684305184,0.350309449589,0.353272707062,0.355843964801,
	0.35810490171,0.360116111787,0.361923194669,0.363561013504,0.365056646443,
	0.366431442802,0.367702471426,0.368883554945,0.369986019104,0.371019243547,
	0.371991072367,0.372908124189,0.373776029317,0.374599613231,0.375383040109,
	0.37612992624,0.376843430486,0.377526327079,0.378181064683,0.37880981468,
	0.379414510938,0.379996882771,0.380558482439,0.381100708226,0.381624823916,
	0.382131975308,0.3826232043,0.38309946095,0.383561613855,0.384010459105,
	0.384446728066,0.38487109414,0.385284178678,0.385686556167,0.386078758778,
	0.386461280398,0.386834580178,0.387199085695,0.387555195759,0.387903282914,
	0.388243695683,0.38857676057,0.38890278387,0.389222053284,0.389534839388,
	0.389841396959,0.390141966168,0.390436773672,0.390726033604,0.39100994847,
	0.391288709974,0.391562499764,0.391831490126,0.392095844606,0.392355718592,
	0.392611259843,0.39286260898,0.393109899932,0.393353260356,0.393592812019,
	0.393828671151,0.394060948779,0.394289751025,0.394515179396
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fRec3[3];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fVec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fConst15;
	double 	fRec2[2];
	double 	fConst16;
	double 	fRec1[3];
	double 	fConst17;
	double 	fConst18;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static double asymclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "liquidsim";
	name = N_("Liquid Drive");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.02157015353825e-10 * fConst0);
	fConst2 = (5.05392538384563e-05 + (fConst0 * (fConst1 - 1.11287436952281e-05)));
	fConst3 = faustpower<2>(fConst0);
	fConst4 = (0.000101078507676913 - (4.04314030707651e-10 * fConst3));
	fConst5 = (1.0 / (5.05392538384563e-05 + (fConst0 * (1.11287436952281e-05 + fConst1))));
	fConst6 = (4.32662069352782e-10 * fConst0);
	fConst7 = (6.49058009830156e-08 + (fConst0 * (fConst6 - 6.55526521956123e-08)));
	fConst8 = (1.29811601966031e-07 - (8.65324138705564e-10 * fConst3));
	fConst9 = (6.49058009830156e-08 + (fConst0 * (6.55526521956123e-08 + fConst6)));
	fConst10 = (1.0 / fConst9);
	fConst11 = (4.28378286487903e-10 * fConst0);
	fConst12 = (fConst11 - 6.42567429731854e-10);
	fConst13 = (6.42567429731854e-10 + fConst11);
	fConst14 = (0 - (8.56756572975806e-10 * fConst3));
	fConst15 = (1.36e-07 * fConst0);
	fConst16 = (2.0 / fConst9);
	fConst17 = (1.01078507676913e-05 * fConst0);
	fConst18 = (0 - fConst17);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = f * clip1.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip1.data[0];
    } else if (i >= clip1.size-1) {
        f = clip1.data[clip1.size-1];
    } else {
	f -= i;
	f = clip1.data[i]*(1-f) + clip1.data[i+1]*f;
    }
    return copysign(f, x);
}

double always_inline Dsp::asymclip(double x) {
    double f = fabs(x);
    f = f * clip2.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip2.data[0];
    } else if (i >= clip2.size-1) {
        f = clip2.data[clip2.size-1];
    } else {
	f -= i;
	f = clip2.data[i]*(1-f) + clip2.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * double(fslider0))));
	double 	fSlow1 = (78258.82137483283 * (exp((2 * (1 - max(0.0,double(fslider1-0.08))))) - 1));
	double 	fSlow2 = (fConst15 * (fSlow1 + 1003900));
	double 	fSlow3 = (1 - fSlow2);
	double 	fSlow4 = (1 + fSlow2);
	double 	fSlow5 = (fConst15 * (3900 + fSlow1));
	double 	fSlow6 = (1 + fSlow5);
	double 	fSlow7 = (fConst10 / fSlow6);
	double 	fSlow8 = (0 - ((1 - fSlow5) / fSlow6));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		fRec3[0] = (((double)input0[i] * 2.0) - (fConst10 * ((fConst8 * fRec3[1]) + (fConst7 * fRec3[2]))));
		double fTemp0 = ((fConst14 * fRec3[1]) + (fConst0 * ((fConst13 * fRec3[0]) + (fConst12 * fRec3[2]))));
		fVec0[0] = fTemp0;
		fRec2[0] = ((fSlow8 * fRec2[1]) + (fSlow7 * ((fSlow4 * fVec0[0]) + (fSlow3 * fVec0[1]))));
		double fTemp1 = ((fConst16 * fVec0[0]) - fRec2[0]);
		fRec1[0] = (((int((fTemp1 > 0)))?symclip(fTemp1):asymclip(fTemp1)) - (fConst5 * ((fConst4 * fRec1[1]) + (fConst2 * fRec1[2]))));
		output0[i] = (FAUSTFLOAT)(fConst5 * (((fConst18 * fRec1[2]) + (fConst17 * fRec1[0])) * fRec0[0]));
		// post processing
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fVec0[1] = fVec0[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case LEVEL: 
		fslider0_ = (float*)data; // , -16.0, -2e+01, 4.0, 0.1 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   LEVEL, 
} PortIndex;
*/

} // end namespace liquiddrive
