void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:50:07 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3057[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3057[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3057[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3057[3] = {
   0.928781,
   0.8317066,
   0.3495817};
   Double_t Graph_reduced_reduced_fehx3057[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3057[3] = {
   0.928781,
   0.8317066,
   0.3495817};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3057,Graph_reduced_reduced_fy3057,Graph_reduced_reduced_felx3057,Graph_reduced_reduced_fehx3057,Graph_reduced_reduced_fely3057,Graph_reduced_reduced_fehy3057);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3057 = new TH1F("Graph_Graph_reduced_reduced3057","Graph",3,0,3);
   Graph_Graph_reduced_reduced3057->SetMinimum(-5);
   Graph_Graph_reduced_reduced3057->SetMaximum(5);
   Graph_Graph_reduced_reduced3057->SetDirectory(0);
   Graph_Graph_reduced_reduced3057->SetStats(0);
   Graph_Graph_reduced_reduced3057->SetLineWidth(2);
   Graph_Graph_reduced_reduced3057->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3057->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3057->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3057->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3057->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3057->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3057->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3057);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx85[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy85[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx85,Graph_reduced_reduced_fy85);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced85 = new TH1F("Graph_Graph_reduced_reduced85","Graph",200,0,110);
   Graph_Graph_reduced_reduced85->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced85->SetMaximum(2.4);
   Graph_Graph_reduced_reduced85->SetDirectory(0);
   Graph_Graph_reduced_reduced85->SetStats(0);
   Graph_Graph_reduced_reduced85->SetLineWidth(2);
   Graph_Graph_reduced_reduced85->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced85->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced85->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced85->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced85->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced85->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced85->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced85->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced85->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced85->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced85->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced85->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced85->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced85->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced85->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced85->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced85);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx86[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy86[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx86,Graph_reduced_reduced_fy86);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced86 = new TH1F("Graph_Graph_reduced_reduced86","Graph",200,0,110);
   Graph_Graph_reduced_reduced86->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced86->SetMaximum(1.2);
   Graph_Graph_reduced_reduced86->SetDirectory(0);
   Graph_Graph_reduced_reduced86->SetStats(0);
   Graph_Graph_reduced_reduced86->SetLineWidth(2);
   Graph_Graph_reduced_reduced86->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced86->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced86->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced86->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced86->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced86->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced86->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced86->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced86->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced86->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced86->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced86->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced86->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced86->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced86->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced86->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced86->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced86);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3058[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3058[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3058[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3058[3] = {
   0.928781,
   0.8317066,
   0.3495817};
   Double_t Graph_reduced_reduced_fehx3058[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3058[3] = {
   0.928781,
   0.8317066,
   0.3495817};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3058,Graph_reduced_reduced_fy3058,Graph_reduced_reduced_felx3058,Graph_reduced_reduced_fehx3058,Graph_reduced_reduced_fely3058,Graph_reduced_reduced_fehy3058);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30573058 = new TH1F("Graph_Graph_Graph_reduced_reduced30573058","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30573058->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30573058->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30573058->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30573058->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30573058->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30573058->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30573058->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30573058->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30573058->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30573058->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30573058->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30573058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30573058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30573058);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx87[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy87[3] = {
   0,
   0,
   0};
   graph = new TGraph(3,Graph_reduced_reduced_fx87,Graph_reduced_reduced_fy87);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced87 = new TH1F("Graph_Graph_reduced_reduced87","Graph",3,0,3);
   Graph_Graph_reduced_reduced87->SetMinimum(0);
   Graph_Graph_reduced_reduced87->SetMaximum(1.1);
   Graph_Graph_reduced_reduced87->SetDirectory(0);
   Graph_Graph_reduced_reduced87->SetStats(0);
   Graph_Graph_reduced_reduced87->SetLineWidth(2);
   Graph_Graph_reduced_reduced87->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced87->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced87->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced87->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced87->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced87->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced87->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced87->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced87->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced87->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced87->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced87->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced87->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced87->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced87->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced87->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced87->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced87->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced87->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced87->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced87);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
