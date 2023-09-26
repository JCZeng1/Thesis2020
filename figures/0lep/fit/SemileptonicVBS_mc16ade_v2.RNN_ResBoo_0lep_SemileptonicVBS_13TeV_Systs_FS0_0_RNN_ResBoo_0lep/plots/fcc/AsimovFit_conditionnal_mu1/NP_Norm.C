void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 26 05:55:24 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3027[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3027[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3027[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3027[3] = {
   0.9697588,
   0.9326628,
   0.5032393};
   Double_t Graph_reduced_reduced_fehx3027[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3027[3] = {
   0.9697588,
   0.9326628,
   0.5032393};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3027,Graph_reduced_reduced_fy3027,Graph_reduced_reduced_felx3027,Graph_reduced_reduced_fehx3027,Graph_reduced_reduced_fely3027,Graph_reduced_reduced_fehy3027);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3027 = new TH1F("Graph_Graph_reduced_reduced3027","Graph",3,0,3);
   Graph_Graph_reduced_reduced3027->SetMinimum(-5);
   Graph_Graph_reduced_reduced3027->SetMaximum(5);
   Graph_Graph_reduced_reduced3027->SetDirectory(0);
   Graph_Graph_reduced_reduced3027->SetStats(0);
   Graph_Graph_reduced_reduced3027->SetLineWidth(2);
   Graph_Graph_reduced_reduced3027->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3027->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3027->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3027->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3027);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx40[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy40[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx40,Graph_reduced_reduced_fy40);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced40 = new TH1F("Graph_Graph_reduced_reduced40","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced40->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced40->SetMaximum(2.4);
   Graph_Graph_reduced_reduced40->SetDirectory(0);
   Graph_Graph_reduced_reduced40->SetStats(0);
   Graph_Graph_reduced_reduced40->SetLineWidth(2);
   Graph_Graph_reduced_reduced40->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced40->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced40->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced40->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced40->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced40->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced40->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced40->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced40->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced40->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced40->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced40->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced40->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced40->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced40->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced40->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced40);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx41[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy41[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx41,Graph_reduced_reduced_fy41);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced41 = new TH1F("Graph_Graph_reduced_reduced41","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced41->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced41->SetMaximum(1.2);
   Graph_Graph_reduced_reduced41->SetDirectory(0);
   Graph_Graph_reduced_reduced41->SetStats(0);
   Graph_Graph_reduced_reduced41->SetLineWidth(2);
   Graph_Graph_reduced_reduced41->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced41->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced41->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced41->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced41->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced41->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced41->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced41->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced41->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced41->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced41->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced41->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced41->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced41->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced41->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced41->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced41);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3028[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3028[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3028[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3028[3] = {
   0.9697588,
   0.9326628,
   0.5032393};
   Double_t Graph_reduced_reduced_fehx3028[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3028[3] = {
   0.9697588,
   0.9326628,
   0.5032393};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3028,Graph_reduced_reduced_fy3028,Graph_reduced_reduced_felx3028,Graph_reduced_reduced_fehx3028,Graph_reduced_reduced_fely3028,Graph_reduced_reduced_fehy3028);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30273028 = new TH1F("Graph_Graph_Graph_reduced_reduced30273028","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30273028->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30273028->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30273028->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30273028->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30273028->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30273028->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30273028->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30273028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30273028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30273028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30273028->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30273028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30273028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30273028);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx42[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy42[3] = {
   0,
   0,
   0};
   graph = new TGraph(3,Graph_reduced_reduced_fx42,Graph_reduced_reduced_fy42);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced42 = new TH1F("Graph_Graph_reduced_reduced42","Graph",3,0,3);
   Graph_Graph_reduced_reduced42->SetMinimum(-1.49318e-14);
   Graph_Graph_reduced_reduced42->SetMaximum(1.357436e-15);
   Graph_Graph_reduced_reduced42->SetDirectory(0);
   Graph_Graph_reduced_reduced42->SetStats(0);
   Graph_Graph_reduced_reduced42->SetLineWidth(2);
   Graph_Graph_reduced_reduced42->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced42->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced42->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced42->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced42->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced42->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced42->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced42->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced42->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced42->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced42->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced42->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced42->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced42->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced42->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced42->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced42->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced42->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced42->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced42);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
