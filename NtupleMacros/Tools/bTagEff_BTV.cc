#include "bTagEff_BTV.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

double getMisTagRate(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 21) return 0.00640763;
      if (jet_pt < 31) return 0.00891274;
      if (jet_pt < 41) return 0.0113847;
      if (jet_pt < 51) return 0.0138236;
      if (jet_pt < 61) return 0.0162294;
      if (jet_pt < 71) return 0.0186021;
      if (jet_pt < 81) return 0.0209416;
      if (jet_pt < 91) return 0.0232481;
      if (jet_pt < 101) return 0.0255214;
      if (jet_pt < 111) return 0.0277616;
      if (jet_pt < 121) return 0.0299687;
      if (jet_pt < 131) return 0.0321428;
      if (jet_pt < 141) return 0.0342836;
      if (jet_pt < 151) return 0.0363914;
      if (jet_pt < 161) return 0.0384661;
      if (jet_pt < 171) return 0.0405077;
      if (jet_pt < 181) return 0.0425161;
      if (jet_pt < 191) return 0.0444915;
      if (jet_pt < 201) return 0.0464337;
      if (jet_pt < 211) return 0.0483428;
      if (jet_pt < 221) return 0.0502188;
      if (jet_pt < 231) return 0.0520617;
      if (jet_pt < 241) return 0.0538715;
      if (jet_pt < 251) return 0.0556482;
      if (jet_pt < 261) return 0.0573918;
      if (jet_pt < 271) return 0.0591022;
      if (jet_pt < 281) return 0.0607796;
      if (jet_pt < 291) return 0.0624238;
      if (jet_pt < 301) return 0.0640349;
      if (jet_pt < 311) return 0.065613;
      if (jet_pt < 321) return 0.0671579;
      if (jet_pt < 331) return 0.0686697;
      if (jet_pt < 341) return 0.0701484;
      if (jet_pt < 351) return 0.0715939;
      if (jet_pt < 361) return 0.0730064;
      if (jet_pt < 371) return 0.0743857;
      if (jet_pt < 381) return 0.075732;
      if (jet_pt < 391) return 0.0770451;
      if (jet_pt < 401) return 0.0783252;
      if (jet_pt < 411) return 0.0795721;
      if (jet_pt < 421) return 0.0807859;
      if (jet_pt < 431) return 0.0819666;
      if (jet_pt < 441) return 0.0831141;
      if (jet_pt < 451) return 0.0842286;
      if (jet_pt < 461) return 0.08531;
      if (jet_pt < 471) return 0.0863582;
      if (jet_pt < 481) return 0.0873734;
      if (jet_pt < 500) return 0.0883554;
      
    return 0.0883554;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 21)  return 0.00663448;
      if (jet_pt < 31)  return 0.00928751;
      if (jet_pt < 41)  return 0.0119401;
      if (jet_pt < 51)  return 0.0145923;
      if (jet_pt < 61)  return 0.017244;
      if (jet_pt < 71)  return 0.0198952;
      if (jet_pt < 81)  return 0.0225461;
      if (jet_pt < 91)  return 0.0251965;
      if (jet_pt < 101)  return 0.0278464;
      if (jet_pt < 111)  return 0.030496;
      if (jet_pt < 121)  return 0.0331451;
      if (jet_pt < 131)  return 0.0357937;
      if (jet_pt < 141)  return 0.0384419;
      if (jet_pt < 151)  return 0.0410897;
      if (jet_pt < 161)  return 0.043737;
      if (jet_pt < 171)  return 0.0463839;
      if (jet_pt < 181)  return 0.0490304;
      if (jet_pt < 191)  return 0.0516764;
      if (jet_pt < 201)  return 0.054322;
      if (jet_pt < 211)  return 0.0569672;
      if (jet_pt < 221)  return 0.0596119;
      if (jet_pt < 231)  return 0.0622562;
      if (jet_pt < 241)  return 0.0649;
      if (jet_pt < 251)  return 0.0675434;
      if (jet_pt < 261)  return 0.0701864;
      if (jet_pt < 271)  return 0.0728289;
      if (jet_pt < 281)  return 0.075471;
      if (jet_pt < 291)  return 0.0781126;
      if (jet_pt < 301)  return 0.0807538;
      if (jet_pt < 311)  return 0.0833946;
      if (jet_pt < 321)  return 0.0860349;
      if (jet_pt < 331)  return 0.0886748;
      if (jet_pt < 341)  return 0.0913143;
      if (jet_pt < 351)  return 0.0939533;
      if (jet_pt < 361)  return 0.0965919;
      if (jet_pt < 371)  return 0.0992301;
      if (jet_pt < 381)  return 0.101868;
      if (jet_pt < 391)  return 0.104505;
      if (jet_pt < 401)  return 0.107142;
      if (jet_pt < 411)  return 0.109778;
      if (jet_pt < 421)  return 0.112414;
      if (jet_pt < 431)  return 0.11505;
      if (jet_pt < 441)  return 0.117685;
      if (jet_pt < 451)  return 0.120319;
      if (jet_pt < 461)  return 0.122954;
      if (jet_pt < 471)  return 0.125587;
      if (jet_pt < 481)  return 0.128221;
      if (jet_pt < 500)  return 0.130854;
      return 0.130854;
    }
    if (jet_eta < 2.4) {
      if (jet_pt < 21)  return 0.00697778;
      if (jet_pt < 31)  return 0.00979852;
      if (jet_pt < 41)  return 0.0126362;
      if (jet_pt < 51)  return 0.0154908;
      if (jet_pt < 61)  return 0.0183623;
      if (jet_pt < 71)  return 0.0212508;
      if (jet_pt < 81)  return 0.0241562;
      if (jet_pt < 91)  return 0.0270785;
      if (jet_pt < 101)  return 0.0300177;
      if (jet_pt < 111)  return 0.0329739;
      if (jet_pt < 121)  return 0.035947;
      if (jet_pt < 131)  return 0.0389371;
      if (jet_pt < 141)  return 0.041944;
      if (jet_pt < 151)  return 0.0449679;
      if (jet_pt < 161)  return 0.0480088;
      if (jet_pt < 171)  return 0.0510665;
      if (jet_pt < 181)  return 0.0541412;
      if (jet_pt < 191)  return 0.0572328;
      if (jet_pt < 201)  return 0.0603414;
      if (jet_pt < 211)  return 0.0634668;
      if (jet_pt < 221)  return 0.0666093;
      if (jet_pt < 231)  return 0.0697686;
      if (jet_pt < 241)  return 0.0729449;
      if (jet_pt < 251)  return 0.0761381;
      if (jet_pt < 261)  return 0.0793482;
      if (jet_pt < 271)  return 0.0825752;
      if (jet_pt < 281)  return 0.0858192;
      if (jet_pt < 291)  return 0.0890801;
      if (jet_pt < 301)  return 0.092358;
      if (jet_pt < 311)  return 0.0956528;
      if (jet_pt < 321)  return 0.0989645;
      if (jet_pt < 331)  return 0.102293;
      if (jet_pt < 341)  return 0.105639;
      if (jet_pt < 351)  return 0.109001;
      if (jet_pt < 361)  return 0.112381;
      if (jet_pt < 371)  return 0.115777;
      if (jet_pt < 381)  return 0.11919;
      if (jet_pt < 391)  return 0.12262;
      if (jet_pt < 401)  return 0.126068;
      if (jet_pt < 411)  return 0.129532;
      if (jet_pt < 421)  return 0.133013;
      if (jet_pt < 431)  return 0.136511;
      if (jet_pt < 441)  return 0.140025;
      if (jet_pt < 451)  return 0.143557;
      if (jet_pt < 461)  return 0.147106;
      if (jet_pt < 471)  return 0.150672;
      if (jet_pt < 481)  return 0.154254;
      if (jet_pt < 500)  return 0.157854;
      return 0.157854;
    }
  }
 if(algo == "TCHEL"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 21) return 0.0493695;
      if (jet_pt < 31) return 0.0681562;
      if (jet_pt < 41) return 0.0864018;
      if (jet_pt < 51) return 0.104111;
      if (jet_pt < 61) return 0.12129;
      if (jet_pt < 71) return 0.137944;
      if (jet_pt < 81) return 0.154077;
      if (jet_pt < 91) return 0.169695;
      if (jet_pt < 101) return 0.184804;
      if (jet_pt < 111) return 0.199409;
      if (jet_pt < 121) return 0.213514;
      if (jet_pt < 131) return 0.227126;
      if (jet_pt < 141) return 0.240249;
      if (jet_pt < 151) return 0.252889;
      if (jet_pt < 161) return 0.265051;
      if (jet_pt < 171) return 0.276741;
      if (jet_pt < 181) return 0.287962;
      if (jet_pt < 191) return 0.298722;
      if (jet_pt < 201) return 0.309025;
      if (jet_pt < 211) return 0.318876;
      if (jet_pt < 221) return 0.328281;
      if (jet_pt < 231) return 0.337245;
      if (jet_pt < 241) return 0.345773;
      if (jet_pt < 251) return 0.353871;
      if (jet_pt < 261) return 0.361543;
      if (jet_pt < 271) return 0.368796;
      if (jet_pt < 281) return 0.375633;
      if (jet_pt < 291) return 0.382062;
      if (jet_pt < 301) return 0.388086;
      if (jet_pt < 311) return 0.393711;
      if (jet_pt < 321) return 0.398943;
      if (jet_pt < 331) return 0.403786;
      if (jet_pt < 341) return 0.408247;
      if (jet_pt < 351) return 0.412329;
      if (jet_pt < 361) return 0.416039;
      if (jet_pt < 371) return 0.419382;
      if (jet_pt < 381) return 0.422363;
      if (jet_pt < 391) return 0.424987;
      if (jet_pt < 401) return 0.42726;
      if (jet_pt < 411) return 0.429186;
      if (jet_pt < 421) return 0.430772;
      if (jet_pt < 431) return 0.432022;
      if (jet_pt < 441) return 0.432942;
      if (jet_pt < 451) return 0.433537;
      if (jet_pt < 461) return 0.433812;
      if (jet_pt < 471) return 0.433772;
      if (jet_pt < 481) return 0.433424;
      if (jet_pt < 500) return 0.432771;
    
     return 0.432771;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 21)  return 0.0532502;
      if (jet_pt < 31)  return 0.0734674;
      if (jet_pt < 41)  return 0.0930739;
      if (jet_pt < 51)  return 0.112075;
      if (jet_pt < 61)  return 0.130476;
      if (jet_pt < 71)  return 0.148282;
      if (jet_pt < 81)  return 0.165499;
      if (jet_pt < 91)  return 0.182132;
      if (jet_pt < 101)  return 0.198187;
      if (jet_pt < 111)  return 0.213668;
      if (jet_pt < 121)  return 0.228581;
      if (jet_pt < 131)  return 0.242932;
      if (jet_pt < 141)  return 0.256725;
      if (jet_pt < 151)  return 0.269967;
      if (jet_pt < 161)  return 0.282662;
      if (jet_pt < 171)  return 0.294816;
      if (jet_pt < 181)  return 0.306434;
      if (jet_pt < 191)  return 0.317522;
      if (jet_pt < 201)  return 0.328085;
      if (jet_pt < 211)  return 0.338128;
      if (jet_pt < 221)  return 0.347657;
      if (jet_pt < 231)  return 0.356677;
      if (jet_pt < 241)  return 0.365194;
      if (jet_pt < 251)  return 0.373212;
      if (jet_pt < 261)  return 0.380737;
      if (jet_pt < 271)  return 0.387774;
      if (jet_pt < 281)  return 0.39433;
      if (jet_pt < 291)  return 0.400409;
      if (jet_pt < 301)  return 0.406016;
      if (jet_pt < 311)  return 0.411157;
      if (jet_pt < 321)  return 0.415837;
      if (jet_pt < 331)  return 0.420062;
      if (jet_pt < 341)  return 0.423837;
      if (jet_pt < 351)  return 0.427167;
      if (jet_pt < 361)  return 0.430058;
      if (jet_pt < 371)  return 0.432515;
      if (jet_pt < 381)  return 0.434544;
      if (jet_pt < 391)  return 0.436149;
      if (jet_pt < 401)  return 0.437336;
      if (jet_pt < 411)  return 0.438111;
      if (jet_pt < 421)  return 0.438478;
      if (jet_pt < 431)  return 0.438444;
      if (jet_pt < 441)  return 0.438013;
      if (jet_pt < 451)  return 0.437191;
      if (jet_pt < 461)  return 0.435984;
      if (jet_pt < 471)  return 0.434396;
      if (jet_pt < 481)  return 0.432433;
      if (jet_pt < 500)  return 0.4301;
      return 0.4301;
    }
    
    if (jet_eta < 2.4) {
      if (jet_pt < 21)  return 0.0460609;
      if (jet_pt < 31)  return 0.063387;
      if (jet_pt < 41)  return 0.080097;
      if (jet_pt < 51)  return 0.0961984;
      if (jet_pt < 61)  return 0.111699;
      if (jet_pt < 71)  return 0.126606;
      if (jet_pt < 81)  return 0.140927;
      if (jet_pt < 91)  return 0.154669;
      if (jet_pt < 101)  return 0.167841;
      if (jet_pt < 111)  return 0.18045;
      if (jet_pt < 121)  return 0.192503;
      if (jet_pt < 131)  return 0.204008;
      if (jet_pt < 141)  return 0.214973;
      if (jet_pt < 151)  return 0.225405;
      if (jet_pt < 161)  return 0.235311;
      if (jet_pt < 171)  return 0.2447;
      if (jet_pt < 181)  return 0.253578;
      if (jet_pt < 191)  return 0.261954;
      if (jet_pt < 201)  return 0.269835;
      if (jet_pt < 211)  return 0.277229;
      if (jet_pt < 221)  return 0.284142;
      if (jet_pt < 231)  return 0.290583;
      if (jet_pt < 241)  return 0.29656;
      if (jet_pt < 251)  return 0.302079;
      if (jet_pt < 261)  return 0.307149;
      if (jet_pt < 271)  return 0.311776;
      if (jet_pt < 281)  return 0.315969;
      if (jet_pt < 291)  return 0.319736;
      if (jet_pt < 301)  return 0.323082;
      if (jet_pt < 311)  return 0.326018;
      if (jet_pt < 321)  return 0.328549;
      if (jet_pt < 331)  return 0.330683;
      if (jet_pt < 341)  return 0.332428;
      if (jet_pt < 351)  return 0.333792;
      if (jet_pt < 361)  return 0.334782;
      if (jet_pt < 371)  return 0.335406;
      if (jet_pt < 381)  return 0.335671;
      if (jet_pt < 391)  return 0.335584;
      if (jet_pt < 401)  return 0.335154;
      if (jet_pt < 411)  return 0.334388;
      if (jet_pt < 421)  return 0.333294;
      if (jet_pt < 431)  return 0.331879;
      if (jet_pt < 441)  return 0.33015;
      if (jet_pt < 451)  return 0.328116;
      if (jet_pt < 461)  return 0.325783;
      if (jet_pt < 471)  return 0.32316;
      if (jet_pt < 481)  return 0.320254;
      if (jet_pt < 500)  return 0.317072;
      return 0.317072;
    }
 }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}


double getMisTagRate_Err(double jet_pt, double jet_eta, const string algo){
  
  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
    if (jet_pt < 21) return 0.00145372;
    if (jet_pt < 31) return 0.00202003;
    if (jet_pt < 41) return 0.00257767;
    if (jet_pt < 51) return 0.00312664;
    if (jet_pt < 61) return 0.00366693;
    if (jet_pt < 71) return 0.00419855;
    if (jet_pt < 81) return 0.00472149;
    if (jet_pt < 91) return 0.00523577;
    if (jet_pt < 101) return 0.00574136;
    if (jet_pt < 111) return 0.00623829;
    if (jet_pt < 121) return 0.00672654;
    if (jet_pt < 131) return 0.00720612;
    if (jet_pt < 141) return 0.00767703;
    if (jet_pt < 151) return 0.00813926;
    if (jet_pt < 161) return 0.00859282;
    if (jet_pt < 171) return 0.00903771;
    if (jet_pt < 181) return 0.00947392;
    if (jet_pt < 191) return 0.00990146;
    if (jet_pt < 201) return 0.0103203;
    if (jet_pt < 211) return 0.0107305;
    if (jet_pt < 221) return 0.011132;
    if (jet_pt < 231) return 0.0115249;
    if (jet_pt < 241) return 0.0119091;
    if (jet_pt < 251) return 0.0122846;
    if (jet_pt < 261) return 0.0126514;
    if (jet_pt < 271) return 0.0130095;
    if (jet_pt < 281) return 0.013359;
    if (jet_pt < 291) return 0.0136998;
    if (jet_pt < 301) return 0.014032;
    if (jet_pt < 311) return 0.0143554;
    if (jet_pt < 321) return 0.0146702;
    if (jet_pt < 331) return 0.0149763;
    if (jet_pt < 341) return 0.0152738;
    if (jet_pt < 351) return 0.0155625;
    if (jet_pt < 361) return 0.0158426;
    if (jet_pt < 371) return 0.0161141;
    if (jet_pt < 381) return 0.0163768;
    if (jet_pt < 391) return 0.0166309;
    if (jet_pt < 401) return 0.0168763;
    if (jet_pt < 411) return 0.017113;
    if (jet_pt < 421) return 0.0173411;
    if (jet_pt < 431) return 0.0175604;
    if (jet_pt < 441) return 0.0177712;
    if (jet_pt < 451) return 0.0179732;
    if (jet_pt < 461) return 0.0181666;
    if (jet_pt < 471) return 0.0183512;
    if (jet_pt < 481) return 0.0185273;
    if (jet_pt < 500) return 0.0186946;
    return 0.0186946;
  }
  if (jet_eta < 1.6) {
    if (jet_pt < 21)  return 0.0014473;
    if (jet_pt < 31)  return 0.00202429;
    if (jet_pt < 41)  return 0.00260017;
    if (jet_pt < 51)  return 0.00317495;
    if (jet_pt < 61)  return 0.00374862;
    if (jet_pt < 71)  return 0.00432118;
    if (jet_pt < 81)  return 0.00489264;
    if (jet_pt < 91)  return 0.00546299;
    if (jet_pt < 101)  return 0.00603223;
    if (jet_pt < 111)  return 0.00660037;
    if (jet_pt < 121)  return 0.00716741;
    if (jet_pt < 131)  return 0.00773334;
    if (jet_pt < 141)  return 0.00829816;
    if (jet_pt < 151)  return 0.00886188;
    if (jet_pt < 161)  return 0.00942449;
    if (jet_pt < 171)  return 0.00998599;
    if (jet_pt < 181)  return 0.0105464;
    if (jet_pt < 191)  return 0.0111057;
    if (jet_pt < 201)  return 0.0116639;
    if (jet_pt < 211)  return 0.012221;
    if (jet_pt < 221)  return 0.0127769;
    if (jet_pt < 231)  return 0.0133318;
    if (jet_pt < 241)  return 0.0138856;
    if (jet_pt < 251)  return 0.0144382;
    if (jet_pt < 261)  return 0.0149898;
    if (jet_pt < 271)  return 0.0155402;
    if (jet_pt < 281)  return 0.0160896;
    if (jet_pt < 291)  return 0.0166378;
    if (jet_pt < 301)  return 0.0171849;
    if (jet_pt < 311)  return 0.017731;
    if (jet_pt < 321)  return 0.0182759;
    if (jet_pt < 331)  return 0.0188197;
    if (jet_pt < 341)  return 0.0193624;
    if (jet_pt < 351)  return 0.019904;
    if (jet_pt < 361)  return 0.0204445;
    if (jet_pt < 371)  return 0.0209839;
    if (jet_pt < 381)  return 0.0215222;
    if (jet_pt < 391)  return 0.0220593;
    if (jet_pt < 401)  return 0.0225954;
    if (jet_pt < 411)  return 0.0231304;
    if (jet_pt < 421)  return 0.0236642;
    if (jet_pt < 431)  return 0.024197;
    if (jet_pt < 441)  return 0.0247286;
    if (jet_pt < 451)  return 0.0252592;
    if (jet_pt < 461)  return 0.0257886;
    if (jet_pt < 471)  return 0.026317;
    if (jet_pt < 481)  return 0.0268442;
    if (jet_pt < 500)  return 0.0273703;
    return 0.0273703;
  }
  if (jet_eta < 2.4) {
    if (jet_pt < 21)  return 0.00145652;
    if (jet_pt < 31)  return 0.00204542;
    if (jet_pt < 41)  return 0.00263792;
    if (jet_pt < 51)  return 0.00323402;
    if (jet_pt < 61)  return 0.00383371;
    if (jet_pt < 71)  return 0.004437;
    if (jet_pt < 81)  return 0.00504389;
    if (jet_pt < 91)  return 0.00565438;
    if (jet_pt < 101)  return 0.00626846;
    if (jet_pt < 111)  return 0.00688614;
    if (jet_pt < 121)  return 0.00750742;
    if (jet_pt < 131)  return 0.00813229;
    if (jet_pt < 141)  return 0.00876076;
    if (jet_pt < 151)  return 0.00939283;
    if (jet_pt < 161)  return 0.0100285;
    if (jet_pt < 171)  return 0.0106678;
    if (jet_pt < 181)  return 0.0113106;
    if (jet_pt < 191)  return 0.0119571;
    if (jet_pt < 201)  return 0.0126071;
    if (jet_pt < 211)  return 0.0132608;
    if (jet_pt < 221)  return 0.013918;
    if (jet_pt < 231)  return 0.0145789;
    if (jet_pt < 241)  return 0.0152433;
    if (jet_pt < 251)  return 0.0159114;
    if (jet_pt < 261)  return 0.016583;
    if (jet_pt < 271)  return 0.0172582;
    if (jet_pt < 281)  return 0.0179371;
    if (jet_pt < 291)  return 0.0186195;
    if (jet_pt < 301)  return 0.0193055;
    if (jet_pt < 311)  return 0.0199951;
    if (jet_pt < 321)  return 0.0206884;
    if (jet_pt < 331)  return 0.0213852;
    if (jet_pt < 341)  return 0.0220856;
    if (jet_pt < 351)  return 0.0227896;
    if (jet_pt < 361)  return 0.0234972;
    if (jet_pt < 371)  return 0.0242084;
    if (jet_pt < 381)  return 0.0249232;
    if (jet_pt < 391)  return 0.0256416;
    if (jet_pt < 401)  return 0.0263636;
    if (jet_pt < 411)  return 0.0270892;
    if (jet_pt < 421)  return 0.0278184;
    if (jet_pt < 431)  return 0.0285512;
    if (jet_pt < 441)  return 0.0292876;
    if (jet_pt < 451)  return 0.0300276;
    if (jet_pt < 461)  return 0.0307712;
    if (jet_pt < 471)  return 0.0315183;
    if (jet_pt < 481)  return 0.0322691;
    if (jet_pt < 500)  return 0.0330235;
    return 0.0330235;
  }
  }
   if(algo == "TCHEL"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 21) return 0.00999474;
      if (jet_pt < 31) return 0.0137933;
      if (jet_pt < 41) return 0.0174797;
      if (jet_pt < 51) return 0.0210553;
      if (jet_pt < 61) return 0.0245213;
      if (jet_pt < 71) return 0.0278788;
      if (jet_pt < 81) return 0.0311291;
      if (jet_pt < 91) return 0.0342735;
      if (jet_pt < 101) return 0.0373131;
      if (jet_pt < 111) return 0.0402492;
      if (jet_pt < 121) return 0.043083;
      if (jet_pt < 131) return 0.0458157;
      if (jet_pt < 141) return 0.0484485;
      if (jet_pt < 151) return 0.0509828;
      if (jet_pt < 161) return 0.0534196;
      if (jet_pt < 171) return 0.0557602;
      if (jet_pt < 181) return 0.0580058;
      if (jet_pt < 191) return 0.0601578;
      if (jet_pt < 201) return 0.0622172;
      if (jet_pt < 211) return 0.0641852;
      if (jet_pt < 221) return 0.0660633;
      if (jet_pt < 231) return 0.0678524;
      if (jet_pt < 241) return 0.069554;
      if (jet_pt < 251) return 0.0711691;
      if (jet_pt < 261) return 0.0726991;
      if (jet_pt < 271) return 0.0741451;
      if (jet_pt < 281) return 0.0755083;
      if (jet_pt < 291) return 0.0767901;
      if (jet_pt < 301) return 0.0779916;
      if (jet_pt < 311) return 0.0791139;
      if (jet_pt < 321) return 0.0801585;
      if (jet_pt < 331) return 0.0811264;
      if (jet_pt < 341) return 0.0820189;
      if (jet_pt < 351) return 0.0828373;
      if (jet_pt < 361) return 0.0835827;
      if (jet_pt < 371) return 0.0842564;
      if (jet_pt < 381) return 0.0848595;
      if (jet_pt < 391) return 0.0853934;
      if (jet_pt < 401) return 0.0858592;
      if (jet_pt < 411) return 0.0862582;
      if (jet_pt < 421) return 0.0865916;
      if (jet_pt < 431) return 0.0868605;
      if (jet_pt < 441) return 0.0870663;
      if (jet_pt < 451) return 0.0872102;
      if (jet_pt < 461) return 0.0872933;
      if (jet_pt < 471) return 0.087317;
      if (jet_pt < 481) return 0.0872823;
      if (jet_pt < 500) return 0.0871906;
    
     return 0.0871906;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 21)  return 0.0107611;
      if (jet_pt < 31)  return 0.0148464;
      if (jet_pt < 41)  return 0.0188082;
      if (jet_pt < 51)  return 0.0226477;
      if (jet_pt < 61)  return 0.0263662;
      if (jet_pt < 71)  return 0.0299647;
      if (jet_pt < 81)  return 0.0334445;
      if (jet_pt < 91)  return 0.0368067;
      if (jet_pt < 101)  return 0.0400526;
      if (jet_pt < 111)  return 0.0431833;
      if (jet_pt < 121)  return 0.0462;
      if (jet_pt < 131)  return 0.0491039;
      if (jet_pt < 141)  return 0.0518963;
      if (jet_pt < 151)  return 0.0545781;
      if (jet_pt < 161)  return 0.0571508;
      if (jet_pt < 171)  return 0.0596154;
      if (jet_pt < 181)  return 0.0619731;
      if (jet_pt < 191)  return 0.0642251;
      if (jet_pt < 201)  return 0.0663726;
      if (jet_pt < 211)  return 0.0684168;
      if (jet_pt < 221)  return 0.0703588;
      if (jet_pt < 231)  return 0.0721999;
      if (jet_pt < 241)  return 0.0739413;
      if (jet_pt < 251)  return 0.0755841;
      if (jet_pt < 261)  return 0.0771294;
      if (jet_pt < 271)  return 0.0785786;
      if (jet_pt < 281)  return 0.0799328;
      if (jet_pt < 291)  return 0.0811931;
      if (jet_pt < 301)  return 0.0823607;
      if (jet_pt < 311)  return 0.0834369;
      if (jet_pt < 321)  return 0.0844228;
      if (jet_pt < 331)  return 0.0853197;
      if (jet_pt < 341)  return 0.0861286;
      if (jet_pt < 351)  return 0.0868508;
      if (jet_pt < 361)  return 0.0874874;
      if (jet_pt < 371)  return 0.0880397;
      if (jet_pt < 381)  return 0.0885088;
      if (jet_pt < 391)  return 0.088896;
      if (jet_pt < 401)  return 0.0892023;
      if (jet_pt < 411)  return 0.089429;
      if (jet_pt < 421)  return 0.0895773;
      if (jet_pt < 431)  return 0.0896484;
      if (jet_pt < 441)  return 0.0896434;
      if (jet_pt < 451)  return 0.0895635;
      if (jet_pt < 461)  return 0.08941;
      if (jet_pt < 471)  return 0.0891839;
      if (jet_pt < 481)  return 0.0888866;
      if (jet_pt < 500)  return 0.0885191;
      return 0.0885191;
    }
    
    if (jet_eta < 2.4) {
      if (jet_pt < 21)  return 0.0093708;
      if (jet_pt < 31)  return 0.0128833;
      if (jet_pt < 41)  return 0.0162642;
      if (jet_pt < 51)  return 0.0195159;
      if (jet_pt < 61)  return 0.0226404;
      if (jet_pt < 71)  return 0.02564;
      if (jet_pt < 81)  return 0.0285168;
      if (jet_pt < 91)  return 0.031273;
      if (jet_pt < 101)  return 0.0339108;
      if (jet_pt < 111)  return 0.0364324;
      if (jet_pt < 121)  return 0.0388399;
      if (jet_pt < 131)  return 0.0411356;
      if (jet_pt < 141)  return 0.0433216;
      if (jet_pt < 151)  return 0.0454002;
      if (jet_pt < 161)  return 0.0473734;
      if (jet_pt < 171)  return 0.0492435;
      if (jet_pt < 181)  return 0.0510126;
      if (jet_pt < 191)  return 0.052683;
      if (jet_pt < 201)  return 0.0542568;
      if (jet_pt < 211)  return 0.0557363;
      if (jet_pt < 221)  return 0.0571235;
      if (jet_pt < 231)  return 0.0584207;
      if (jet_pt < 241)  return 0.05963;
      if (jet_pt < 251)  return 0.0607537;
      if (jet_pt < 261)  return 0.0617939;
      if (jet_pt < 271)  return 0.0627528;
      if (jet_pt < 281)  return 0.0636325;
      if (jet_pt < 291)  return 0.0644354;
      if (jet_pt < 301)  return 0.0651635;
      if (jet_pt < 311)  return 0.065819;
      if (jet_pt < 321)  return 0.0664042;
      if (jet_pt < 331)  return 0.0669211;
      if (jet_pt < 341)  return 0.067372;
      if (jet_pt < 351)  return 0.0677591;
      if (jet_pt < 361)  return 0.0680846;
      if (jet_pt < 371)  return 0.0683505;
      if (jet_pt < 381)  return 0.0685592;
      if (jet_pt < 391)  return 0.0687127;
      if (jet_pt < 401)  return 0.0688134;
      if (jet_pt < 411)  return 0.0688633;
      if (jet_pt < 421)  return 0.0688646;
      if (jet_pt < 431)  return 0.0688196;
      if (jet_pt < 441)  return 0.0687304;
      if (jet_pt < 451)  return 0.0685992;
      if (jet_pt < 461)  return 0.0684281;
      if (jet_pt < 471)  return 0.0682194;
      if (jet_pt < 481)  return 0.0679752;
      if (jet_pt < 500)  return 0.0676978;
      return 0.0676978;
    }
 }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}


double getMisTagSF(double jet_pt, double jet_eta, string algo){

jet_eta = fabs(jet_eta);
if(algo == "TCHEM"){
  if (jet_eta < 0.8 ) {
    if (jet_pt < 51) return 1.25608;
    if (jet_pt < 101) return 1.22715;
    if (jet_pt < 151) return 1.20132;
    if (jet_pt < 201) return 1.1792;
    if (jet_pt < 251) return 1.16143;
    if (jet_pt < 301) return 1.14866;
    if (jet_pt < 351) return 1.14151;
    if (jet_pt < 401) return 1.14061;
    if (jet_pt < 451) return 1.14661;
    if (jet_pt < 501) return 1.16014;
    return 1.0;
  }
  if (jet_eta < 1.6) {
    if (jet_pt < 51)  return 1.23003;
    if (jet_pt < 101)  return 1.18001;
    if (jet_pt < 151)  return 1.14852;
    if (jet_pt < 201)  return 1.13364;
    if (jet_pt < 251)  return 1.1334;
    if (jet_pt < 301)  return 1.14586;
    if (jet_pt < 351)  return 1.16907;
    if (jet_pt < 401)  return 1.20108;
    if (jet_pt < 451)  return 1.23995;
    if (jet_pt < 501)  return 1.28372;
    return 1.0;
  }
  if (jet_eta < 2.4) {
    if (jet_pt < 51)  return 1.1432;
    if (jet_pt < 101)  return 1.11045;
    if (jet_pt < 151)  return 1.11141;
    if (jet_pt < 201)  return 1.13497;
    if (jet_pt < 251)  return 1.17;
    if (jet_pt < 301)  return 1.20541;
    if (jet_pt < 351)  return 1.23008;
    if (jet_pt < 401)  return 1.23289;
    if (jet_pt < 451)  return 1.20275;
    if (jet_pt < 501)  return 1.12852;
    return 1.0;
  }
 }
 if(algo == "TCHEL"){
   if (jet_eta < 0.8 ) {
     if (jet_pt < 51) return 1.07583;
     if (jet_pt < 101) return 1.06113;
     if (jet_pt < 151) return 1.05073;
     if (jet_pt < 201) return 1.0446;
     if (jet_pt < 251) return 1.04277;
     if (jet_pt < 301) return 1.04521;
     if (jet_pt < 351) return 1.05195;
     if (jet_pt < 401) return 1.06297;
     if (jet_pt < 451) return 1.07827;
     if (jet_pt < 501) return 1.09786;
     
     return 1.0;
   }
   if (jet_eta < 1.6) {
     if (jet_pt < 51)  return 1.13792;
     if (jet_pt < 101)  return 1.1337;
     if (jet_pt < 151)  return 1.13283;
     if (jet_pt < 201)  return 1.13533;
     if (jet_pt < 251)  return 1.14117;
     if (jet_pt < 301)  return 1.15038;
     if (jet_pt < 351)  return 1.16293;
     if (jet_pt < 401)  return 1.17885;
     if (jet_pt < 451)  return 1.19811;
     if (jet_pt < 501)  return 1.22074;
     return 1.0;
   }
   if (jet_eta < 2.4) {
     if (jet_pt < 51)  return 1.11236;
     if (jet_pt < 101)  return 1.12409;
     if (jet_pt < 151)  return 1.13569;
     if (jet_pt < 201)  return 1.14718;
     if (jet_pt < 251)  return 1.15854;
     if (jet_pt < 301)  return 1.16978;
     if (jet_pt < 351)  return 1.18089;
     if (jet_pt < 401)  return 1.19189;
     if (jet_pt < 451)  return 1.20276;
     if (jet_pt < 501)  return 1.21351;
     return 1.0;
   }
 }
 std::cout << "Error: eta > 2.4 value found" << endl;
 return 1.0;
}



double getMisTagSF_Err(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 51) return 0.204253;
      if (jet_pt < 101) return 0.183556;
      if (jet_pt < 151) return 0.168762;
      if (jet_pt < 201) return 0.158864;
      if (jet_pt < 251) return 0.152858;
      if (jet_pt < 301) return 0.149741;
      if (jet_pt < 351) return 0.148506;
      if (jet_pt < 401) return 0.148151;
      if (jet_pt < 451) return 0.147669;
      if (jet_pt < 501) return 0.146058;
      return 0.0;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 51)  return 0.175036;
      if (jet_pt < 101)  return 0.156874;
      if (jet_pt < 151)  return 0.145234;
      if (jet_pt < 201)  return 0.139034;
      if (jet_pt < 251)  return 0.137192;
      if (jet_pt < 301)  return 0.138627;
      if (jet_pt < 351)  return 0.142254;
      if (jet_pt < 401)  return 0.146994;
      if (jet_pt < 451)  return 0.151764;
      if (jet_pt < 501)  return 0.155481;
      return 0.0;
    }
    if (jet_eta < 2.4) {
      if (jet_pt < 51)  return 0.142093;
      if (jet_pt < 101)  return 0.129252;
      if (jet_pt < 151)  return 0.125408;
      if (jet_pt < 201)  return 0.127989;
      if (jet_pt < 251)  return 0.134422;
      if (jet_pt < 301)  return 0.142133;
      if (jet_pt < 351)  return 0.148551;
      if (jet_pt < 401)  return 0.151102;
      if (jet_pt < 451)  return 0.147214;
      if (jet_pt < 501)  return 0.134313;
      return 0.0;
    }
  }
  if(algo == "TCHEL"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 51) return 0.112643;
      if (jet_pt < 101) return 0.110145;
      if (jet_pt < 151) return 0.108283;
      if (jet_pt < 201) return 0.107059;
      if (jet_pt < 251) return 0.106471;
      if (jet_pt < 301) return 0.106521;
      if (jet_pt < 351) return 0.107208;
      if (jet_pt < 401) return 0.108531;
      if (jet_pt < 451) return 0.110492;
      if (jet_pt < 501) return 0.11309;
      
      return 0.0;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 51)  return 0.118623;
      if (jet_pt < 101)  return 0.117827;
      if (jet_pt < 151)  return 0.117709;
      if (jet_pt < 201)  return 0.118268;
      if (jet_pt < 251)  return 0.119503;
      if (jet_pt < 301)  return 0.121416;
      if (jet_pt < 351)  return 0.124006;
      if (jet_pt < 401)  return 0.127273;
      if (jet_pt < 451)  return 0.131217;
      if (jet_pt < 501)  return 0.135839;
      return 0.0;
    }
    if (jet_eta < 2.4) {
      if (jet_pt < 51)  return 0.117217;
      if (jet_pt < 101)  return 0.116603;
      if (jet_pt < 151)  return 0.116739;
      if (jet_pt < 201)  return 0.117627;
      if (jet_pt < 251)  return 0.119267;
      if (jet_pt < 301)  return 0.121657;
      if (jet_pt < 351)  return 0.124799;
      if (jet_pt < 401)  return 0.128691;
      if (jet_pt < 451)  return 0.133336;
      if (jet_pt < 501)  return 0.138731;
      return 0.0;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}

double getBTagSF(double jet_pt, double jet_eta, string algo){
  
  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    /*
    if (jet_eta < 0.8 ) {
      return 0.94;
    }
    if (jet_eta < 1.6) {
    
      return 0.93;
  }
    if (jet_eta < 2.4) {
      
    return 0.93;
    }
    */
    return 0.96;
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 1.0;
}

double getBTagSF_Err(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      return 0.094;
    }
    if (jet_eta < 1.6) {
      
      return 0.093;
    }
    if (jet_eta < 2.4) {
      
      return 0.093;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}
