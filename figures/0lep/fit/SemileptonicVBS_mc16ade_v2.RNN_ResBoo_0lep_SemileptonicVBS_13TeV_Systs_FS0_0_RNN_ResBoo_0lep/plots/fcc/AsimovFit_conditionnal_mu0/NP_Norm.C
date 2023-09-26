void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 26 05:56:32 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3037[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3037[3] = {
   1.019845e-07,
   5.431528e-08,
   2.803545e-09};
   Double_t Graph_reduced_reduced_felx3037[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3037[3] = {
   0.9699916,
   0.9189366,
   0.4746088};
   Double_t Graph_reduced_reduced_fehx3037[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3037[3] = {
   0.9699916,
   0.9189366,
   0.4746088};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3037,Graph_reduced_reduced_fy3037,Graph_reduced_reduced_felx3037,Graph_reduced_reduced_fehx3037,Graph_reduced_reduced_fely3037,Graph_reduced_reduced_fehy3037);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3037 = new TH1F("Graph_Graph_reduced_reduced3037","Graph",3,0,3);
   Graph_Graph_reduced_reduced3037->SetMinimum(-5);
   Graph_Graph_reduced_reduced3037->SetMaximum(5);
   Graph_Graph_reduced_reduced3037->SetDirectory(0);
   Graph_Graph_reduced_reduced3037->SetStats(0);
   Graph_Graph_reduced_reduced3037->SetLineWidth(2);
   Graph_Graph_reduced_reduced3037->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3037->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3037->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3037->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3037);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx55[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy55[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx55,Graph_reduced_reduced_fy55);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced55 = new TH1F("Graph_Graph_reduced_reduced55","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced55->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced55->SetMaximum(2.4);
   Graph_Graph_reduced_reduced55->SetDirectory(0);
   Graph_Graph_reduced_reduced55->SetStats(0);
   Graph_Graph_reduced_reduced55->SetLineWidth(2);
   Graph_Graph_reduced_reduced55->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced55->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced55->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced55->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced55->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced55->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced55->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced55->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced55->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced55->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced55->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced55->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced55->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced55->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced55->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced55->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced55);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx56[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy56[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx56,Graph_reduced_reduced_fy56);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced56 = new TH1F("Graph_Graph_reduced_reduced56","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced56->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced56->SetMaximum(1.2);
   Graph_Graph_reduced_reduced56->SetDirectory(0);
   Graph_Graph_reduced_reduced56->SetStats(0);
   Graph_Graph_reduced_reduced56->SetLineWidth(2);
   Graph_Graph_reduced_reduced56->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced56->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced56->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced56->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced56->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced56->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced56->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced56->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced56->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced56->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced56->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced56->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced56->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced56->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced56->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced56->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced56);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3038[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3038[3] = {
   1.019845e-07,
   5.431528e-08,
   2.803545e-09};
   Double_t Graph_reduced_reduced_felx3038[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3038[3] = {
   0.9699916,
   0.9189366,
   0.4746088};
   Double_t Graph_reduced_reduced_fehx3038[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3038[3] = {
   0.9699916,
   0.9189366,
   0.4746088};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3038,Graph_reduced_reduced_fy3038,Graph_reduced_reduced_felx3038,Graph_reduced_reduced_fehx3038,Graph_reduced_reduced_fely3038,Graph_reduced_reduced_fehy3038);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30373038 = new TH1F("Graph_Graph_Graph_reduced_reduced30373038","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30373038->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30373038->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30373038->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30373038->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30373038->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30373038->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30373038->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30373038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30373038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30373038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30373038->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30373038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30373038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30373038);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx57[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy57[3] = {
   4.194507e-07,
   1.377144e-07,
   3.185134e-09};
   graph = new TGraph(3,Graph_reduced_reduced_fx57,Graph_reduced_reduced_fy57);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced57 = new TH1F("Graph_Graph_reduced_reduced57","Graph",3,0,3);
   Graph_Graph_reduced_reduced57->SetMinimum(-7.076003e-06);
   Graph_Graph_reduced_reduced57->SetMaximum(8.411435e-06);
   Graph_Graph_reduced_reduced57->SetDirectory(0);
   Graph_Graph_reduced_reduced57->SetStats(0);
   Graph_Graph_reduced_reduced57->SetLineWidth(2);
   Graph_Graph_reduced_reduced57->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced57->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced57->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced57->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced57->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced57->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced57->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced57->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced57->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced57->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced57->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced57->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced57->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced57->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced57->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced57->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced57->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced57->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced57->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced57);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
