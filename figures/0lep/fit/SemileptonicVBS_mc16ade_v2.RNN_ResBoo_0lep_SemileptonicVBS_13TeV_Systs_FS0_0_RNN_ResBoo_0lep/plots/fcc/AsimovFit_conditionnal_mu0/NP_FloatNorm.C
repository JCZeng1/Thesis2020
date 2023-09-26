void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 26 05:56:31 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3035[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3035[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3035[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3035[2] = {
   0.07213087,
   0.03434147};
   Double_t Graph_reduced_reduced_fehx3035[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3035[2] = {
   0.07213087,
   0.03434147};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3035,Graph_reduced_reduced_fy3035,Graph_reduced_reduced_felx3035,Graph_reduced_reduced_fehx3035,Graph_reduced_reduced_fely3035,Graph_reduced_reduced_fehy3035);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3035 = new TH1F("Graph_Graph_reduced_reduced3035","Graph",2,0,2);
   Graph_Graph_reduced_reduced3035->SetMinimum(-5);
   Graph_Graph_reduced_reduced3035->SetMaximum(5);
   Graph_Graph_reduced_reduced3035->SetDirectory(0);
   Graph_Graph_reduced_reduced3035->SetStats(0);
   Graph_Graph_reduced_reduced3035->SetLineWidth(2);
   Graph_Graph_reduced_reduced3035->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3035->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3035->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3035->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3035);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx52[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy52[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx52,Graph_reduced_reduced_fy52);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced52 = new TH1F("Graph_Graph_reduced_reduced52","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced52->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced52->SetMaximum(2.4);
   Graph_Graph_reduced_reduced52->SetDirectory(0);
   Graph_Graph_reduced_reduced52->SetStats(0);
   Graph_Graph_reduced_reduced52->SetLineWidth(2);
   Graph_Graph_reduced_reduced52->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced52->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced52->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced52->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced52->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced52->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced52->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced52->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced52->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced52->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced52->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced52->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced52->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced52->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced52->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced52->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced52);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx53[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy53[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx53,Graph_reduced_reduced_fy53);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced53 = new TH1F("Graph_Graph_reduced_reduced53","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced53->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced53->SetMaximum(1.2);
   Graph_Graph_reduced_reduced53->SetDirectory(0);
   Graph_Graph_reduced_reduced53->SetStats(0);
   Graph_Graph_reduced_reduced53->SetLineWidth(2);
   Graph_Graph_reduced_reduced53->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced53->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced53->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced53->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced53->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced53->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced53->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced53->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced53->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced53->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced53->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced53->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced53->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced53->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced53->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced53->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced53);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3036[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3036[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3036[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3036[2] = {
   0.07213087,
   0.03434147};
   Double_t Graph_reduced_reduced_fehx3036[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3036[2] = {
   0.07213087,
   0.03434147};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3036,Graph_reduced_reduced_fy3036,Graph_reduced_reduced_felx3036,Graph_reduced_reduced_fehx3036,Graph_reduced_reduced_fely3036,Graph_reduced_reduced_fehy3036);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30353036 = new TH1F("Graph_Graph_Graph_reduced_reduced30353036","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30353036->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30353036->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30353036->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30353036->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30353036->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30353036->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30353036->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30353036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30353036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30353036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30353036->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30353036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30353036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30353036);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx54[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy54[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx54,Graph_reduced_reduced_fy54);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced54 = new TH1F("Graph_Graph_reduced_reduced54","Graph",2,0,2);
   Graph_Graph_reduced_reduced54->SetMinimum(-7.076003e-06);
   Graph_Graph_reduced_reduced54->SetMaximum(8.411435e-06);
   Graph_Graph_reduced_reduced54->SetDirectory(0);
   Graph_Graph_reduced_reduced54->SetStats(0);
   Graph_Graph_reduced_reduced54->SetLineWidth(2);
   Graph_Graph_reduced_reduced54->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced54->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced54->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced54->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced54->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced54->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced54->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced54->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced54->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced54->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced54->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced54->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced54->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced54->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced54->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced54->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced54->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced54->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced54);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
