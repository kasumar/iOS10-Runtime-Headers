/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (nonatomic, readonly) const void*baseAddress;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;

- (const void*)baseAddress;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { unsigned int x_1_1_1; void *x_1_1_2; } x1; unsigned int x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; struct CGContext {} *x9; float x10; bool x11; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_12_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_12_1_2; } x12; struct CGAffineTransform { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; double x_13_1_5; double x_13_1_6; } x13; int x14; unsigned long long x15; unsigned long long x16; int x17; bool x18; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_19_1_1; unsigned long long x_19_1_2; struct Kernel {} *x_19_1_3; } x19[1024]; unsigned long long x20; double x21; double x22; bool x23; id x24; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; long x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; out void*x59; const out void*x60; out unsigned int x61/* : ? */; void*x62; float x63; unsigned short x64; void*x65; const int x66; in void*x67; void*x68; const void*x69; void*x70; SEL x71; union { short x_72_1_1; void*x_72_1_2; const void*x_72_1_3; BOOL x_72_1_4; void*x_72_1_5; void*x_72_1_6; void*x_72_1_7; void*x_72_1_8; void*x_72_1_9; void*x_72_1_10; void*x_72_1_11; void*x_72_1_12; void*x_72_1_13; double x_72_1_14; void*x_72_1_15; void*x_72_1_16; const void*x_72_1_17; int x_72_1_18; void*x_72_1_19; long x_72_1_20; double x_72_1_21; void*x_72_1_22; short x_72_1_23; void*x_72_1_24; double x_72_1_25; SEL x_72_1_26; SEL x_72_1_27; void*x_72_1_28; void*x_72_1_29; void*x_72_1_30; SEL x_72_1_31; SEL x_72_1_32; unsigned int x_72_1_33/* : ? */; void*x_72_1_34; short x_72_1_35; int x_72_1_36; BOOL x_72_1_37; void*x_72_1_38; short x_72_1_39; void*x_72_1_40; const int x_72_1_41; in void*x_72_1_42; void*x_72_1_43; BOOL x_72_1_44; void*x_72_1_45; void*x_72_1_46; const void*x_72_1_47; void*x_72_1_48; void*x_72_1_49; void*x_72_1_50; struct  void **x1; int x2; int x3; int x4;  {} x_72_1_51; char *x_72_1_52; } x72; void*x73; const void*x74; void*x75; void*x76; void*x77; void*x78; const void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; unsigned int x115/* : ? */; long x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; short x138; int x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; long x165; void*x166; void*x167; id x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; union { short x_175_1_1; void*x_175_1_2; const void*x_175_1_3; BOOL x_175_1_4; void*x_175_1_5; void*x_175_1_6; unsigned char x_175_1_7; void*x_175_1_8; void*x_175_1_9; void*x_175_1_10; BOOL x_175_1_11; void*x_175_1_12; void*x_175_1_13; struct  struct CGPoint { double x_1_1_1; double x_1_1_2;  {} x_175_1_14; void*x_175_1_15; void*x_175_1_16; void*x_175_1_17; void*x_175_1_18; void*x_175_1_19; short x_175_1_20; void*x_175_1_21; const void*x_175_1_22; BOOL x_175_1_23; void*x_175_1_24; void*x_175_1_25; unsigned char x_175_1_26; void*x_175_1_27; unsigned short x_175_1_28; int x_175_1_29; void*x_175_1_30; void*x_175_1_31; void*x_175_1_32; struct  double x_2_1_1; double x_2_1_2;  {} x_175_1_33; void*x_175_1_34; void*x_175_1_35; void*x_175_1_36; void*x_175_1_37; void*x_175_1_38; void*x_175_1_39; } x175; void*x176; const void*x177; void*x178; void*x179; void*x180; int x181; unsigned long long x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; struct x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; unsigned long long x228; double x229; double x230; bool x231; id x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; long doublex258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; BOOL x281; short x282; void*x283; BOOL x284; void*x285; long x286; void*x287; BOOL x288; void*x289; short x290; void*x291; BOOL x292; void*x293; void*x294; void x295; BOOL x296; void*x297; void*x298; void x299; BOOL x300; void*x301; void*x302; void x303; BOOL x304; void*x305; void*x306; void x307; BOOL x308; void*x309; void*x310; void x311; BOOL x312; void*x313; void*x314; void x315; BOOL x316; void*x317; void*x318; void x319; BOOL x320; void*x321; void*x322; void x323; BOOL x324; BOOL x325; void*x326; const float x327; void*x328; void*x329; in void*x330; void*x331; BOOL x332; void*x333; short x334; void*x335; void*x336; short x337; short x338; void*x339; void*x340; short x341; short x342; void*x343; void*x344; short x345; short x346; void*x347; void*x348; short x349; short x350; void*x351; void*x352; short x353; short x354; void*x355; void*x356; short x357; short x358; void*x359; void*x360; short x361; short x362; short x363; unsigned int x364/* : ? */; void*x365; short x366; short x367; void*x368; void*x369; short x370; void*x371; void*x372; in void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; int x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; oneway void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; id x469; int x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; unsigned long x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; out void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; double x631; void*x632; double x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; union x645; void*x646; void*x647; void*x648; void*x649; void*x650; union x651; void*x652; void*x653; void*x654; void*x655; void*x656; unsigned char x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; id x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; unsigned char x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; unsigned char x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; unsigned char x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; unsigned char x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; id x766; unsigned char x767; void*x768; void*x769; void*x770; void*x771; void*x772; id x773; unsigned char x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; union x814; void*x815; void*x816; void*x817; void*x818; void*x819; unsigned char x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; unsigned char x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; void*x835; union x836; void*x837; void*x838; void*x839; void*x840; void*x841; unsigned char x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; unsigned char x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; unsigned char x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; unsigned char x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; unsigned char x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; unsigned char x882; void*x883; void*x884; void*x885; void*x886; void*x887; id x888; unsigned char x889; void*x890; void*x891; void*x892; void*x893; void*x894; id x895; unsigned char x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; long x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; BOOL x918; const out void*x919; void*x920; void*x921; BOOL x922; void*x923; SEL x924; union { int x_925_1_1; double x_925_1_2; } x925; void*x926; const void*x927; void*x928; void*x929; const out void*x930; void*x931; void*x932; void*x933; void*x934; float x935; const void*x936; SEL x937; union { short x_938_1_1; void*x_938_1_2; const void*x_938_1_3; BOOL x_938_1_4; void*x_938_1_5; void*x_938_1_6; unsigned char x_938_1_7; void*x_938_1_8; float x_938_1_9; float x_938_1_10; int x_938_1_11; in void*x_938_1_12; void*x_938_1_13; const void*x_938_1_14; in short x_938_1_15; float x_938_1_16; out const void*x_938_1_17; void*x_938_1_18; struct  double x1; double x2; double x3; double x4; double x5; double x6;  {} x_938_1_19; } x938; void*x939; const void*x940; void*x941; void*x942; void*x943; int x944; double x945; char *x946; void*x947; void*x948; const void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; short x958; void*x959; void*x960; void*x961; const void*x962; void*x963; void*x964; BOOL x965; void*x966; void*x967; void*x968; void*x969; void*x970; unsigned char x971; void*x972; void*x973; void*x974; unsigned char x975; void*x976; out void*x977; long x978; void*x979; out void*x980; const void*x981; unsigned short x982; void*x983; void*x984; void*x985; void*x986; void*x987; BOOL x988; void*x989; void*x990; void*x991; void*x992; void*x993; struct x994; void*x995; }*)arg4;
- (id)metalTexture;

@end
