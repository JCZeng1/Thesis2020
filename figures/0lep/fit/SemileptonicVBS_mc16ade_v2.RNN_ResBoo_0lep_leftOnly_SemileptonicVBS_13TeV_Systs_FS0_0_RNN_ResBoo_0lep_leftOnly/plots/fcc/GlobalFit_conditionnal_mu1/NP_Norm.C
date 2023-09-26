void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:47:38 2022) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,1000,400);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->ToggleEventStatus();
   c->SetHighLightColor(2);
   c->Range(-0.2714932,-9.350453,3.122172,5.755287);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.08);
   c->SetRightMargin(0.036);
   c->SetTopMargin(0.05);
   c->SetBottomMargin(0.288);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph_reduced_reduced_fx3017[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3017[3] = {
   -0.1761275,
   -0.3740753,
   0.1418507};
   Double_t Graph_reduced_reduced_felx3017[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3017[3] = {
   1.000251,
   0.9509654,
   0.612808};
   Double_t Graph_reduced_reduced_fehx3017[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3017[3] = {
   1.000251,
   0.9509654,
   0.612808};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3017,Graph_reduced_reduced_fy3017,Graph_reduced_reduced_felx3017,Graph_reduced_reduced_fehx3017,Graph_reduced_reduced_fely3017,Graph_reduced_reduced_fehy3017);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3017 = new TH1F("Graph_Graph_reduced_reduced3017","Graph",3,0,3);
   Graph_Graph_reduced_reduced3017->SetMinimum(-5);
   Graph_Graph_reduced_reduced3017->SetMaximum(5);
   Graph_Graph_reduced_reduced3017->SetDirectory(0);
   Graph_Graph_reduced_reduced3017->SetStats(0);
   Graph_Graph_reduced_reduced3017->SetLineWidth(2);
   Graph_Graph_reduced_reduced3017->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3017->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3017->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3017->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3017);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx25[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy25[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx25,Graph_reduced_reduced_fy25);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced25 = new TH1F("Graph_Graph_reduced_reduced25","Graph",200,0,110);
   Graph_Graph_reduced_reduced25->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced25->SetMaximum(2.4);
   Graph_Graph_reduced_reduced25->SetDirectory(0);
   Graph_Graph_reduced_reduced25->SetStats(0);
   Graph_Graph_reduced_reduced25->SetLineWidth(2);
   Graph_Graph_reduced_reduced25->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced25->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced25->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced25->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced25->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced25->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced25->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced25->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced25->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced25->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced25->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced25->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced25->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced25->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced25->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced25->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced25);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx26[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy26[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx26,Graph_reduced_reduced_fy26);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced26 = new TH1F("Graph_Graph_reduced_reduced26","Graph",200,0,110);
   Graph_Graph_reduced_reduced26->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced26->SetMaximum(1.2);
   Graph_Graph_reduced_reduced26->SetDirectory(0);
   Graph_Graph_reduced_reduced26->SetStats(0);
   Graph_Graph_reduced_reduced26->SetLineWidth(2);
   Graph_Graph_reduced_reduced26->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced26->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced26->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced26->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced26->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced26->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced26->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced26->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced26->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced26->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced26->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced26->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced26);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3018[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3018[3] = {
   -0.1761275,
   -0.3740753,
   0.1418507};
   Double_t Graph_reduced_reduced_felx3018[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3018[3] = {
   1.000251,
   0.9509654,
   0.612808};
   Double_t Graph_reduced_reduced_fehx3018[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3018[3] = {
   1.000251,
   0.9509654,
   0.612808};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3018,Graph_reduced_reduced_fy3018,Graph_reduced_reduced_felx3018,Graph_reduced_reduced_fehx3018,Graph_reduced_reduced_fely3018,Graph_reduced_reduced_fehy3018);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30173018 = new TH1F("Graph_Graph_Graph_reduced_reduced30173018","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30173018->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30173018->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30173018->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30173018->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30173018->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30173018->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30173018->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30173018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30173018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30173018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30173018->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30173018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30173018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30173018);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx27[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy27[3] = {
   -3,
   -1.209436,
   0.1795052};
   graph = new TGraph(3,Graph_reduced_reduced_fx27,Graph_reduced_reduced_fy27);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced27 = new TH1F("Graph_Graph_reduced_reduced27","Graph",3,0,3);
   Graph_Graph_reduced_reduced27->SetMinimum(-3.6);
   Graph_Graph_reduced_reduced27->SetMaximum(3.6);
   Graph_Graph_reduced_reduced27->SetDirectory(0);
   Graph_Graph_reduced_reduced27->SetStats(0);
   Graph_Graph_reduced_reduced27->SetLineWidth(2);
   Graph_Graph_reduced_reduced27->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced27->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced27->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced27->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced27->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced27->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced27->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced27->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced27->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced27->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced27->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced27->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced27->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced27->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced27->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced27->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced27->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced27->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced27->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced27);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
