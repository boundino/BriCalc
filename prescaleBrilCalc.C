using namespace std;
#include "uti.h"

void prescaleBrilCalc(TString inputMB, Float_t unprescale, Float_t unprescaleMB, TString eventfilter, Int_t isPbPb)
{
  TString tPbPb = (isPbPb>0)?"PbPb":"pp";
  cout<<"  -- Calculating lumi of "<<tPbPb<<endl;
  cout<<"  -- Sample being processed"<<endl;
  cout<<"     "<<inputMB<<endl;
  cout<<"  -- Trigger path and event sel being processed"<<endl;
  cout<<"     "<<eventfilter<<endl;

  Double_t prescaleMB = unprescaleMB/unprescale;
  
  TFile* f = new TFile(inputMB);
  TTree* ntHi = (TTree*)f->Get("ntHi");
  ntHi->AddFriend("ntSkim");
  ntHi->AddFriend("ntHlt");
 
  TH1F* hhiBin = new TH1F("hhiBin","",200,0,200);
  ntHi->Project("hhiBin","hiBin",Form("%s",eventfilter.Data()));
  
  //0-100%

  cout<<"  -- Processing 0-100\%"<<endl;
  Double_t ncountsMB090rescaled = hhiBin->Integral(1, 180)*10/9;
  Double_t ncountsMB0100 = hhiBin->Integral(1, 200);
  cout<<"   - Number of MB events (0-100\%): "<<ncountsMB0100<<endl;
  cout<<"   - Number of MB events (0-90\%) * (10/9): "<<ncountsMB090rescaled<<endl;

  Double_t TAA0100 = 392.4/(70.*1e9);
  Double_t lumiMB0100 = TAA0100*ncountsMB0100;
  Double_t lumiMB090rescaled = TAA0100*ncountsMB090rescaled;
  Double_t lumiHighpt0100 = lumiMB0100/prescaleMB;
  
  cout<<"   - Luminosity brilcalc low pt: "<<lumiMB0100<<" "<<lumiMB090rescaled<<endl;
  cout<<"   - Luminosity brilcalc high pt: "<<lumiHighpt0100<<endl;

  //0-10%
  cout<<"  -- Processing 0-10\%"<<endl;  
  Double_t ncountsMB010 = hhiBin->Integral(1,20);
  cout<<"   - Number of MB events (0-10%): "<<ncountsMB010<<endl;
  
  Double_t TAA010 = (23.2/1e9);
  Double_t lumiMB010 = TAA010*ncountsMB010;
  Double_t lumiHighpt010 = lumiMB010/prescaleMB;      

  cout<<"   - Luminosity brilcalc low pt: "<<lumiMB010<<endl;
  cout<<"   - Luminosity brilcalc high pt: "<<lumiHighpt010<<endl;

  //30-100%
  cout<<"  -- Processing 30-100\%"<<endl;
  Double_t ncountsMB30100 = hhiBin->Integral(61,200);
  cout<<"   - Number of MB events (30-100%): "<<ncountsMB30100<<endl;
  
  Double_t TAA30100 = (23.2/1e9);
  Double_t lumiMB30100 = TAA30100*ncountsMB30100;
  Double_t lumiHighpt30100 = lumiMB30100/prescaleMB;      

  cout<<"   - Luminosity brilcalc low pt: "<<lumiMB30100<<endl;
  cout<<"   - Luminosity brilcalc high pt: "<<lumiHighpt30100<<endl;

  //30-50%
  cout<<"  -- Processing 30-50\%"<<endl;
  Double_t ncountsMB3050 = hhiBin->Integral(61,100);
  cout<<"   - Number of MB events (30-50%): "<<ncountsMB3050<<endl;
  
  Double_t TAA3050 = (23.2/1e9);
  Double_t lumiMB3050 = TAA3050*ncountsMB3050;
  Double_t lumiHighpt3050 = lumiMB3050/prescaleMB;      

  cout<<"   - Luminosity brilcalc low pt: "<<lumiMB3050<<endl;
  cout<<"   - Luminosity brilcalc high pt: "<<lumiHighpt3050<<endl;
}

int main(int argc, char* argv[])
{
  if(argc==6)
    {
      prescaleBrilCalc(argv[1],atof(argv[2]),atof(argv[3]),argv[4],atoi(argv[5]));
      return 0;
    }
  else
    {
      cout<<"  Error: Invalid parameters number"<<endl;
    }
}

