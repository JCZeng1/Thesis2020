void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:49:31 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3047[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3047[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3047[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3047[3] = {
   1.006222,
   0.9806289,
   0.7459215};
   Double_t Graph_reduced_reduced_fehx3047[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3047[3] = {
   1.006222,
   0.9806289,
   0.7459215};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3047,Graph_reduced_reduced_fy3047,Graph_reduced_reduced_felx3047,Graph_reduced_reduced_fehx3047,Graph_reduced_reduced_fely3047,Graph_reduced_reduced_fehy3047);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3047 = new TH1F("Graph_Graph_reduced_reduced3047","Graph",3,0,3);
   Graph_Graph_reduced_reduced3047->SetMinimum(-5);
   Graph_Graph_reduced_reduced3047->SetMaximum(5);
   Graph_Graph_reduced_reduced3047->SetDirectory(0);
   Graph_Graph_reduced_reduced3047->SetStats(0);
   Graph_Graph_reduced_reduced3047->SetLineWidth(2);
   Graph_Graph_reduced_reduced3047->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3047->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3047->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3047->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3047);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx70[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy70[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx70,Graph_reduced_reduced_fy70);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced70 = new TH1F("Graph_Graph_reduced_reduced70","Graph",200,0,110);
   Graph_Graph_reduced_reduced70->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced70->SetMaximum(2.4);
   Graph_Graph_reduced_reduced70->SetDirectory(0);
   Graph_Graph_reduced_reduced70->SetStats(0);
   Graph_Graph_reduced_reduced70->SetLineWidth(2);
   Graph_Graph_reduced_reduced70->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced70->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced70->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced70->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced70->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced70->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced70->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced70->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced70->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced70->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced70->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced70->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced70->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced70->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced70->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced70->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced70);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx71[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy71[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx71,Graph_reduced_reduced_fy71);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced71 = new TH1F("Graph_Graph_reduced_reduced71","Graph",200,0,110);
   Graph_Graph_reduced_reduced71->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced71->SetMaximum(1.2);
   Graph_Graph_reduced_reduced71->SetDirectory(0);
   Graph_Graph_reduced_reduced71->SetStats(0);
   Graph_Graph_reduced_reduced71->SetLineWidth(2);
   Graph_Graph_reduced_reduced71->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced71->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced71->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced71->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced71->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced71->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced71->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced71->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced71->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced71->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced71->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced71->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced71->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced71->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced71->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced71->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced71->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced71);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3048[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3048[3] = {
   0,
   0,
   0};
   Double_t Graph_reduced_reduced_felx3048[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3048[3] = {
   1.006222,
   0.9806289,
   0.7459215};
   Double_t Graph_reduced_reduced_fehx3048[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3048[3] = {
   1.006222,
   0.9806289,
   0.7459215};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3048,Graph_reduced_reduced_fy3048,Graph_reduced_reduced_felx3048,Graph_reduced_reduced_fehx3048,Graph_reduced_reduced_fely3048,Graph_reduced_reduced_fehy3048);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30473048 = new TH1F("Graph_Graph_Graph_reduced_reduced30473048","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30473048->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30473048->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30473048->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30473048->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30473048->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30473048->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30473048->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30473048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30473048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30473048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30473048->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30473048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30473048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30473048);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx72[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy72[3] = {
   -3,
   0,
   0};
   graph = new TGraph(3,Graph_reduced_reduced_fx72,Graph_reduced_reduced_fy72);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced72 = new TH1F("Graph_Graph_reduced_reduced72","Graph",3,0,3);
   Graph_Graph_reduced_reduced72->SetMinimum(-3.3);
   Graph_Graph_reduced_reduced72->SetMaximum(0.3);
   Graph_Graph_reduced_reduced72->SetDirectory(0);
   Graph_Graph_reduced_reduced72->SetStats(0);
   Graph_Graph_reduced_reduced72->SetLineWidth(2);
   Graph_Graph_reduced_reduced72->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced72->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced72->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced72->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced72->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced72->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced72->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced72->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced72->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced72->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced72->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced72->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced72->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced72->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced72->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced72->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced72->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced72->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced72->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced72->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced72);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
