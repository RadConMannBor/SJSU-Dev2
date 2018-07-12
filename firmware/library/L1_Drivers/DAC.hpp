
const uint16_t triangle_lookup[] =
{
	8,16,23,31,39,47,55,63,
70,78,86,94,102,109,117,125,
133,141,148,156,164,172,180,188,
195,203,211,219,227,234,242,250,
258,266,273,281,289,297,305,313,
320,328,336,344,352,359,367,375,
383,391,398,406,414,422,430,438,
445,453,461,469,477,484,492,500,
508,516,523,531,539,547,555,563,
570,578,586,594,602,609,617,625,
633,641,648,656,664,672,680,688,
695,703,711,719,727,734,742,750,
758,766,773,781,789,797,805,813,
820,828,836,844,852,859,867,875,
883,891,898,906,914,922,930,938,
945,953,961,969,977,984,992,1000,
992,984,977,969,961,953,945,938,
930,922,914,906,898,891,883,875,
867,859,852,844,836,828,820,813,
805,797,789,781,773,766,758,750,
742,734,727,719,711,703,695,688,
680,672,664,656,648,641,633,625,
617,609,602,594,586,578,570,563,
555,547,539,531,523,516,508,500,
492,484,477,469,461,453,445,438,
430,422,414,406,398,391,383,375,
367,359,352,344,336,328,320,313,
305,297,289,281,273,266,258,250,
242,234,227,219,211,203,195,188,
180,172,164,156,148,141,133,125,
117,109,102,94,86,78,70,63,
55,47,39,31,23,16,8,0
};

const uint16_t sawtooth_lookup[]=
{
	8,16,23,31,39,47,55,63,
70,78,86,94,102,109,117,125,
133,141,148,156,164,172,180,188,
195,203,211,219,227,234,242,250,
258,266,273,281,289,297,305,313,
320,328,336,344,352,359,367,375,
383,391,398,406,414,422,430,438,
445,453,461,469,477,484,492,500,
508,516,523,531,539,547,555,563,
570,578,586,594,602,609,617,625,
633,641,648,656,664,672,680,688,
695,703,711,719,727,734,742,750,
758,766,773,781,789,797,805,813,
820,828,836,844,852,859,867,875,
883,891,898,906,914,922,930,938,
945,953,961,969,977,984,992,1000,
1008,1016,1023,1031,1039,1047,1055,1063,
1070,1078,1086,1094,1102,1109,1117,1125,
1133,1141,1148,1156,1164,1172,1180,1188,
1195,1203,1211,1219,1227,1234,1242,1250,
1258,1266,1273,1281,1289,1297,1305,1313,
1320,1328,1336,1344,1352,1359,1367,1375,
1383,1391,1398,1406,1414,1422,1430,1438,
1445,1453,1461,1469,1477,1484,1492,1500,
1508,1516,1523,1531,1539,1547,1555,1563,
1570,1578,1586,1594,1602,1609,1617,1625,
1633,1641,1648,1656,1664,1672,1680,1688,
1695,1703,1711,1719,1727,1734,1742,1750,
1758,1766,1773,1781,1789,1797,1805,1813,
1820,1828,1836,1844,1852,1859,1867,1875,
1883,1891,1898,1906,1914,1922,1930,1938,
1945,1953,1961,1969,1977,1984,1992,0
}

const uint16_t sine_lookup[256] =
{
[0]  =	262,
[1]  =	269,
[2]  =	275,
[3]  =	281,
[4]  =	287,
[5]  =	294,
[6]  =	300,
[7]  =	306,
[8]  =	312,
[9]  =	318,
[10] =	324,
[11]  =	330,
[12]  =	336,
[13]  =	342,
[14]  =	348,
[15]  =	354,
[16]  =	360,
[17]  =	365,
[18]  =	371,
[19]  =	377,
[20]  =	382,
[21]  =	388,
[22]  =	393,
[23]  =	398,
[24]  =	403,
[25]  =	408,
[26]  =	413,
[27]  =	418,
[28]  =	423,
[29]  =	428,
[30]  =	433,
[31]  =	437,
[32]  =	441,
[33]  =	446,
[34]  =	450,
[35]  =	454,
[36]  =	458,
[37]  =	462,
[38]  =	465,
[39]  =	469,
[40]  =	472,
[41]  =	476,
[42]  =	479,
[43]  =	482,
[44]  =	485,
[45]  =	487,
[46]  =	490,
[47]  =	493,
[48]  =	495,
[49]  =	497,
[50]  =	499,
[51]  =	501,
[52]  =	503,
[53]  =	504,
[54]  =	506,
[55]  =	507,
[56]  =	508,
[57]  =	509,
[58]  =	510,
[59]  =	511,
[60]  =	511,
[61]  =	512,
[62]  =	512,
[63]  =	512,
[64]  =	512,
[65]  =	512,
[66]  =	511,
[67]  =	511,
[68]  =	510,
[69]  =	509,
[70]  =	508,
[71]  =	507,
[72]  =	506,
[73]  =	504,
[74]  =	503,
[75]  =	501,
[76]  =	499,
[77]  =	497,
[78]  =	495,
[79]  =	493,
[80]  =	490,
[81]  =	487,
[82]  =	485,
[83]  =	482,
[84]  =	479,
[85]  =	476,
[86]  =	472,
[87]  =	469,
[88]  =	465,
[89]  =	462,
[90]  =	458,
[91]  =	454,
[92]  =	450,
[93]  =	446,
[94]  =	441,
[95]  =	437,
[96]  =	433,
[97]  =	428,
[98]  =	423,
[99]  =	418,
[100] = 413,
[101]  =	408	
[102]  =	403,
[103]  =	398,
[104]  =	393,
[105]  =	388,
[106]  =	382,
[107]  =	377,
[108]  =	371,
[109]  =	365,
[110]  =	360,
[111]  =	354,
[112]  =	348,
[113]  =	342,
[114]  =	336,
[115]  =	330,
[116]  =	324,
[117]  =	318,
[118]  =	312,
[119]  =	306,
[120]  =	300,
[121]  =	294,
[122]  =	287,
[123]  =	281,
[124]  =	275,
[125]  =	269,
[126]  =	262,
[127]  =	256,
[128]  =	250,
[129]  =	243,
[130]  =	237,
[131]  =	231,
[132]  =	225,
[133]  =	218,
[134]  =	212,
[135]  =	206,
[136]  =	200,
[137]  =	194,
[138]  =	188,
[139]  =	182,
[140]  =	176,
[141]  =	170,
[142]  =	164,
[143]  =	158,
[144]  =	152,
[145]  =	147,
[146]  =	141,
[147]  =	135,
[148]  =	130,
[149]  =	124,
[150]  =	119,
[151]  =	114,
[152]  =	109,
[153]  =	104,
[154]  =	99	
[155]  =	94,
[156]  =	89,
[157]  =	84,
[158]  =	79,
[159]  =	75,
[160]  =	71,
[161]  =	66,
[162]  =	62,
[163]  =	58,
[164]  =	54,
[165]  =	50,
[166]  =	47,
[167]  =	43,
[168]  =	40,
[169]  =	36,
[170]  =	33,
[171]  =	30,
[172]  =	27,
[173]  =	25,
[174]  =	22,
[175]  =	19,
[176]  =	17,
[177]  =	15,
[178]  =	13,
[179]  =	11,
[180]  =	9	
[181]  =	8,
[182]  =	6,
[183]  =	5,
[184]  =	4,
[185]  =	3,
[186]  =	2,
[187]  =	1,
[188]  =	1,
[189]  =	0,
[190]  =	0,
[191]  =	0,
[192]  =	0,
[193]  =	0,
[194]  =	1,
[195]  =	1,
[196]  =	2,
[197]  =	3,
[198]  =	4,
[199]  =	5,
[200]  =	6,
[201]  =	8,
[202]  =	9,
[203]  =	11	
[204]  =	13,
[205]  =	15,
[206]  =	17,
[207]  =	19,
[208]  =	22,
[209]  =	25,
[210]  =	27,
[211]  =	30,
[212]  =	33,
[213]  =	36,
[214]  =	40,
[215]  =	43,
[216]  =	47,
[217]  =	50,
[218]  =	54,
[219]  =	58,
[220]  =	62,
[221]  =	66,
[222]  =	71,
[223]  =	75,
[224]  =	79,
[225]  =	84,
[226]  =	89,
[227]  =	94,
[228]  =	99,
[229]  =	104,
[230]  =	109,
[231]  =	114,
[232]  =	119,
[233]  =	124,
[234]  =	130,
[235]  =	135,
[236]  =	141,
[237]  =	147,
[238]  =	152,
[239]  =	158,
[240]  =	164,
[241]  =	170,
[242]  =	176,
[243]  =	182,
[244]  =	188,
[245]  =	194,
[246]  =	200,
[247]  =	206,
[248]  =	212,
[249]  =	218,
[250]  =	225,
[251]  =	231,
[252]  =	237,
[253]  =	243,
[254]  =	250,
[255]  =	256	
};

Class DAC
{
Public:
    DAC(void);                                                             
    bool Init();
	bool WriteDAC(uint16_t dac_output);
	void SineDAC(uint32_t frequency_hz);      //Demonstration Function
	void SawtoothDAC(uint32_t frequency_hz);  //Demonstration Function
	void TriangleDAC(uint32_t frequency_hz);  //Demonstration Function
                                                                        
private:
	void SetBIAS(bool bias_level);
                                            
};
