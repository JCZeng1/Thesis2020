void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:47:37 2022) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,1000,400);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->ToggleEventStatus();
   c->SetHighLightColor(2);
   c->Range(-0.1809955,-9.350453,2.081448,5.755287);
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
   
   Double_t Graph_reduced_reduced_fx3015[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3015[2] = {
   0.879973,
   1.025865};
   Double_t Graph_reduced_reduced_felx3015[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3015[2] = {
   0.08983672,
   0.04456811};
   Double_t Graph_reduced_reduced_fehx3015[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3015[2] = {
   0.08983672,
   0.04456811};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3015,Graph_reduced_reduced_fy3015,Graph_reduced_reduced_felx3015,Graph_reduced_reduced_fehx3015,Graph_reduced_reduced_fely3015,Graph_reduced_reduced_fehy3015);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3015 = new TH1F("Graph_Graph_reduced_reduced3015","Graph",2,0,2);
   Graph_Graph_reduced_reduced3015->SetMinimum(-5);
   Graph_Graph_reduced_reduced3015->SetMaximum(5);
   Graph_Graph_reduced_reduced3015->SetDirectory(0);
   Graph_Graph_reduced_reduced3015->SetStats(0);
   Graph_Graph_reduced_reduced3015->SetLineWidth(2);
   Graph_Graph_reduced_reduced3015->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3015->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3015->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3015->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3015);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx22[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy22[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx22,Graph_reduced_reduced_fy22);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced22 = new TH1F("Graph_Graph_reduced_reduced22","Graph",200,0,110);
   Graph_Graph_reduced_reduced22->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced22->SetMaximum(2.4);
   Graph_Graph_reduced_reduced22->SetDirectory(0);
   Graph_Graph_reduced_reduced22->SetStats(0);
   Graph_Graph_reduced_reduced22->SetLineWidth(2);
   Graph_Graph_reduced_reduced22->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced22->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced22->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced22->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced22->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced22->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced22->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced22->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced22->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced22->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced22);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx23[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy23[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx23,Graph_reduced_reduced_fy23);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced23 = new TH1F("Graph_Graph_reduced_reduced23","Graph",200,0,110);
   Graph_Graph_reduced_reduced23->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced23->SetMaximum(1.2);
   Graph_Graph_reduced_reduced23->SetDirectory(0);
   Graph_Graph_reduced_reduced23->SetStats(0);
   Graph_Graph_reduced_reduced23->SetLineWidth(2);
   Graph_Graph_reduced_reduced23->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced23->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced23->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced23->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced23->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced23->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced23->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced23->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced23->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced23->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced23->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced23->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced23->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced23->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced23->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced23->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced23);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3016[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3016[2] = {
   0.879973,
   1.025865};
   Double_t Graph_reduced_reduced_felx3016[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3016[2] = {
   0.08983672,
   0.04456811};
   Double_t Graph_reduced_reduced_fehx3016[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3016[2] = {
   0.08983672,
   0.04456811};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3016,Graph_reduced_reduced_fy3016,Graph_reduced_reduced_felx3016,Graph_reduced_reduced_fehx3016,Graph_reduced_reduced_fely3016,Graph_reduced_reduced_fehy3016);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30153016 = new TH1F("Graph_Graph_Graph_reduced_reduced30153016","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30153016->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30153016->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30153016->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30153016->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30153016->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30153016->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30153016->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30153016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30153016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30153016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30153016->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30153016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30153016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30153016);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx24[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy24[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx24,Graph_reduced_reduced_fy24);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced24 = new TH1F("Graph_Graph_reduced_reduced24","Graph",2,0,2);
   Graph_Graph_reduced_reduced24->SetMinimum(-3.6);
   Graph_Graph_reduced_reduced24->SetMaximum(3.6);
   Graph_Graph_reduced_reduced24->SetDirectory(0);
   Graph_Graph_reduced_reduced24->SetStats(0);
   Graph_Graph_reduced_reduced24->SetLineWidth(2);
   Graph_Graph_reduced_reduced24->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced24->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced24->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced24->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced24->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced24->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced24->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced24->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced24->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced24->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced24->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced24->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced24->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced24->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced24->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced24->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced24->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced24->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced24);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
