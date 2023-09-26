void 2Lep_MjjReweighting_CRVjet_MTagMerJets()
{
//=========Macro generated from canvas: /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets/
//=========  (Mon Nov  8 17:00:06 2021) by ROOT version 6.24/06
   TCanvas */eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets = new TCanvas("/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets", "",0,0,500,500);
   gStyle->SetOptStat(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetHighLightColor(2);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Range(0,0,1,1);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFillColor(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderMode(0);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderSize(2);
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets
   TPad *Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets = new TPad("Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets", "",0,0.1,1,0.3);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Draw();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Range(-366.6667,-23.33333,7300,10);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFillColor(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderMode(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderSize(2);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetRightMargin(0.3);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetTopMargin(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBottomMargin(0.4);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Double_t xAxis37[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37 = new TH1F("data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37","",6, xAxis37);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetBinContent(1,0.1162786);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetBinContent(2,0.3877502);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetBinContent(3,-1.295836);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetBinContent(4,0.8792133);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetBinContent(5,0.008327615);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetMinimum(-10);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetMaximum(10);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetEntries(5);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetLineWidth(2);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetMarkerStyle(25);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->SetMarkerSize(0.5);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetTitle("M_{jj}^{tag} [GeV]");
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetRange(1,6);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetLabelSize(0.1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetTitleSize(0.15);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetTitleOffset(0.89);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetXaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetTitle("Pull");
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetLabelSize(0.1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetTitleSize(0.14);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetTitleOffset(0.25);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetYaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetZaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetZaxis()->SetTitleOffset(1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->GetZaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__37->Draw("P");
   TLine *line = new TLine(400,1,5000,1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Ratio/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
  
// ------------>Primitives in pad: Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets
   TPad *Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets = new TPad("Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets", "",0,0.5,1,1);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Draw();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Range(-366.6667,0.03869604,7300,0.3609881);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFillColor(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderMode(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderSize(2);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetRightMargin(0.3);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetTopMargin(0.05);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBottomMargin(0.02);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Double_t xAxis38[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38 = new TH1F("Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38","",6, xAxis38);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(1,0.1817496);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(2,0.3279094);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(3,0.2086183);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(4,0.1203082);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(5,0.09675521);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(6,0.0593167);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinContent(7,0.005342616);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(1,0.001898976);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(2,0.002691184);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(3,0.001612924);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(4,0.001353111);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(5,0.001387179);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(6,0.0005815507);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetBinError(7,0.000185503);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetEntries(581980);

   ci = TColor::GetColor("#cc00cc");
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetLineColor(ci);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetMarkerColor(ci);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetMarkerStyle(20);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->SetMarkerSize(0.5);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetXaxis()->SetRange(1,6);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetXaxis()->SetLabelFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetXaxis()->SetLabelSize(0);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetXaxis()->SetTitleOffset(1);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetXaxis()->SetTitleFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetTitle("Events");
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetLabelFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetLabelSize(0.04);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetTitleSize(0.07);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetTitleOffset(0.57);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetYaxis()->SetTitleFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetZaxis()->SetLabelFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetZaxis()->SetTitleOffset(1);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->GetZaxis()->SetTitleFont(42);
   Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__38->Draw("");
   Double_t xAxis39[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39 = new TH1F("data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39","data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets",6, xAxis39);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(1,0.2136009);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(2,0.3603424);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(3,0.218762);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(4,0.1068595);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(5,0.0761341);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(6,0.02419094);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinContent(7,0.0001102192);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(1,0.005715651);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(2,0.007417462);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(3,0.005781215);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(4,0.004040982);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(5,0.003413683);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(6,0.001943708);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetBinError(7,0.0001455047);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetEntries(6540.678);

   ci = TColor::GetColor("#000099");
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetLineColor(ci);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetLineWidth(2);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetMarkerStyle(20);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->SetMarkerSize(0.5);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetXaxis()->SetRange(1,300);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetXaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetXaxis()->SetTitleOffset(1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetXaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetYaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetYaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetZaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetZaxis()->SetTitleOffset(1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->GetZaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__39->Draw("same");
   
   TLegend *leg = new TLegend(0.3,0.5,0.6,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Z_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets","Z+jets","lep");

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc00cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets","Data*","lep");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.84,"#it{Merged CRVjet}");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   Hists/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
  
// ------------>Primitives in pad: Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets
   TPad *Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets = new TPad("Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets", "",0,0.3,1,0.5);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Draw();
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Range(-366.6667,-0.2580645,7300,2);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFillColor(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderMode(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBorderSize(2);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetRightMargin(0.3);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetTopMargin(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetBottomMargin(0.07);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetFrameBorderMode(0);
   Double_t xAxis40[7] = {400, 600, 1000, 1400, 1800, 2500, 5000}; 
   
   TH1F *data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40 = new TH1F("data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40","",6, xAxis40);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(1,1.175248);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(2,1.098909);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(3,1.048623);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(4,0.8882148);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(5,0.7868733);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinContent(6,0.4078268);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(1,0.03144794);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(2,0.02262046);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(3,0.02771193);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(4,0.0335886);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(5,0.03528164);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetBinError(6,0.03276832);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetMinimum(-0.1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetMaximum(2);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetEntries(6);
   
   TF1 *fit_resolved10 = new TF1("fit_resolved","[0] + [1] * x",400,6000, TF1::EAddToList::kNo);
   fit_resolved10->SetFillColor(19);
   fit_resolved10->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit_resolved10->SetLineColor(ci);
   fit_resolved10->SetLineWidth(2);
   fit_resolved10->SetChisquare(2.616405);
   fit_resolved10->SetNDF(4);
   fit_resolved10->GetXaxis()->SetLabelFont(42);
   fit_resolved10->GetXaxis()->SetTitleOffset(1);
   fit_resolved10->GetXaxis()->SetTitleFont(42);
   fit_resolved10->GetYaxis()->SetLabelFont(42);
   fit_resolved10->GetYaxis()->SetTitleFont(42);
   fit_resolved10->SetParameter(0,1.297613);
   fit_resolved10->SetParError(0,0.02135558);
   fit_resolved10->SetParLimits(0,0,0);
   fit_resolved10->SetParameter(1,-0.0002374167);
   fit_resolved10->SetParError(1,1.182758e-05);
   fit_resolved10->SetParLimits(1,0,0);
   fit_resolved10->SetParent(data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetListOfFunctions()->Add(fit_resolved10);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetLineWidth(2);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetMarkerStyle(20);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->SetMarkerSize(0.5);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetXaxis()->SetRange(1,6);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetXaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetXaxis()->SetLabelSize(0);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetXaxis()->SetTitleOffset(1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetXaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetTitle("data/MC");
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetLabelSize(0.1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetTitleSize(0.14);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetTitleOffset(0.25);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetYaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetZaxis()->SetLabelFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetZaxis()->SetTitleOffset(1);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->GetZaxis()->SetTitleFont(42);
   data_0ptag1pfat0pjet_0ptv_CRVjet_MTagMerJets__40->Draw("P");
   Data/Bgd/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->Modified();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->cd();
   /eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets->SetSelected(/eos/user/a/akotsoke/ModelPlots_eos/reweighting/2Lep_MjjReweighting_CRVjet_MTagMerJets);
}
