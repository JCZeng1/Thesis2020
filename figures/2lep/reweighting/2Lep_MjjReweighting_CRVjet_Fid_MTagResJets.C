void 2Lep_MjjReweighting_CRVjet_Fid_MTagResJets()
{
//=========Macro generated from canvas: /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets/
//=========  (Mon Nov  8 17:01:49 2021) by ROOT version 6.24/06
   TCanvas */eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets = new TCanvas("/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets", "",0,0,500,500);
   gStyle->SetOptStat(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetHighLightColor(2);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Range(0,0,1,1);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFillColor(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderMode(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderSize(2);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets
   TPad *Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets = new TPad("Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets", "",0,0.1,1,0.3);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Draw();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Range(-366.6667,-23.33333,7300,10);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFillColor(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderMode(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderSize(2);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetRightMargin(0.3);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetTopMargin(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBottomMargin(0.4);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Double_t xAxis41[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41 = new TH1F("data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41","",6, xAxis41);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetBinContent(1,-1.615323);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetBinContent(2,1.980395);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetBinContent(3,1.254177);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetBinContent(4,-0.6912232);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetBinContent(5,-4.181962);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetMinimum(-10);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetMaximum(10);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetEntries(5);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetLineWidth(2);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetMarkerStyle(25);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->SetMarkerSize(0.5);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetTitle("M_{jj}^{tag} [GeV]");
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetRange(1,6);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetLabelSize(0.1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetTitleSize(0.15);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetTitleOffset(0.89);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetXaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetTitle("Pull");
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetLabelSize(0.1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetTitleSize(0.14);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetTitleOffset(0.25);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetYaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetZaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetZaxis()->SetTitleOffset(1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->GetZaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__41->Draw("P");
   TLine *line = new TLine(400,1,5000,1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
  
// ------------>Primitives in pad: Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets
   TPad *Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets = new TPad("Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets", "",0,0.5,1,1);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Draw();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Range(-366.6667,0.006903208,7300,0.4072334);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFillColor(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderMode(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderSize(2);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetRightMargin(0.3);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetTopMargin(0.05);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBottomMargin(0.02);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Double_t xAxis42[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42 = new TH1F("Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42","",6, xAxis42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(1,0.2639492);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(2,0.3676692);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(3,0.1822324);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(4,0.08886117);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(5,0.06257536);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(6,0.03222173);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinContent(7,0.002490852);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(1,0.001378829);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(2,0.001818831);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(3,0.00131963);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(4,0.0009710193);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(5,0.0007620001);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(6,0.000427245);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetBinError(7,3.278445e-05);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetEntries(6237300);

   ci = TColor::GetColor("#cc00cc");
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetLineColor(ci);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetMarkerColor(ci);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetMarkerStyle(20);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->SetMarkerSize(0.5);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetXaxis()->SetRange(1,6);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetXaxis()->SetLabelFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetXaxis()->SetLabelSize(0);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetXaxis()->SetTitleOffset(1);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetXaxis()->SetTitleFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetTitle("Events");
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetLabelFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetLabelSize(0.04);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetTitleSize(0.07);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetTitleOffset(0.57);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetYaxis()->SetTitleFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetZaxis()->SetLabelFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetZaxis()->SetTitleOffset(1);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->GetZaxis()->SetTitleFont(42);
   Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__42->Draw("");
   Double_t xAxis43[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43 = new TH1F("data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43","data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets",6, xAxis43);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(1,0.2934465);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(2,0.3827251);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(3,0.1762073);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(4,0.08024999);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(5,0.05184191);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(6,0.01550046);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinContent(7,2.874687e-05);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(1,0.001187679);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(2,0.001354593);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(3,0.0009186973);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(4,0.0006195933);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(5,0.0004983131);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(6,0.0002732993);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetBinError(7,1.316287e-05);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetEntries(208482.2);

   ci = TColor::GetColor("#000099");
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetLineColor(ci);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetLineWidth(2);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetMarkerStyle(20);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->SetMarkerSize(0.5);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetXaxis()->SetRange(1,300);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetXaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetXaxis()->SetTitleOffset(1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetXaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetYaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetYaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetZaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetZaxis()->SetTitleOffset(1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->GetZaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__43->Draw("same");
   
   TLegend *leg = new TLegend(0.3,0.5,0.6,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Z_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets","Z+jets","lep");

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets","Data*","lep");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.84,"#it{Resolved CRVjet}");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
  
// ------------>Primitives in pad: Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets
   TPad *Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets = new TPad("Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets", "",0,0.3,1,0.5);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Draw();
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Range(-366.6667,-0.2580645,7300,2);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFillColor(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderMode(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBorderSize(2);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetRightMargin(0.3);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetTopMargin(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetBottomMargin(0.07);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetFrameBorderMode(0);
   Double_t xAxis44[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44 = new TH1F("data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44","",6, xAxis44);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(1,1.111753);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(2,1.040949);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(3,0.9669373);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(4,0.9030939);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(5,0.8284716);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinContent(6,0.481056);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(1,0.004499647);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(2,0.003684272);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(3,0.005041349);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(4,0.006972599);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(5,0.007963407);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetBinError(6,0.008481829);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetMinimum(-0.1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetMaximum(2);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetEntries(6);
   
   TF1 *fit_resolved11 = new TF1("fit_resolved","[0] + [1] * x",400,6000, TF1::EAddToList::kNo);
   fit_resolved11->SetFillColor(19);
   fit_resolved11->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit_resolved11->SetLineColor(ci);
   fit_resolved11->SetLineWidth(2);
   fit_resolved11->SetChisquare(28.86179);
   fit_resolved11->SetNDF(4);
   fit_resolved11->GetXaxis()->SetLabelFont(42);
   fit_resolved11->GetXaxis()->SetTitleOffset(1);
   fit_resolved11->GetXaxis()->SetTitleFont(42);
   fit_resolved11->GetYaxis()->SetLabelFont(42);
   fit_resolved11->GetYaxis()->SetTitleFont(42);
   fit_resolved11->SetParameter(0,1.198217);
   fit_resolved11->SetParError(0,0.003781633);
   fit_resolved11->SetParLimits(0,0,0);
   fit_resolved11->SetParameter(1,-0.0001874643);
   fit_resolved11->SetParError(1,2.637424e-06);
   fit_resolved11->SetParLimits(1,0,0);
   fit_resolved11->SetParent(data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetListOfFunctions()->Add(fit_resolved11);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetLineWidth(2);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetMarkerStyle(20);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->SetMarkerSize(0.5);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetXaxis()->SetRange(1,6);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetXaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetXaxis()->SetLabelSize(0);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetXaxis()->SetTitleOffset(1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetXaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetTitle("data/MC");
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetLabelSize(0.1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetTitleSize(0.14);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetTitleOffset(0.25);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetYaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetZaxis()->SetLabelFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetZaxis()->SetTitleOffset(1);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->GetZaxis()->SetTitleFont(42);
   data_0ptag2pjet_0ptv_CRVjet_Fid_MTagResJets__44->Draw("P");
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->cd();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets->SetSelected(/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_Fid_MTagResJets);
}
