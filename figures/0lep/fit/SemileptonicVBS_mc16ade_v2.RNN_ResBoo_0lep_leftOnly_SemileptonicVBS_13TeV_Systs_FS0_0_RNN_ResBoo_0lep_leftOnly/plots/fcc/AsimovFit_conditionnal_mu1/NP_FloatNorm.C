void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:49:31 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3045[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3045[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3045[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3045[2] = {
   0.09786958,
   0.05135861};
   Double_t Graph_reduced_reduced_fehx3045[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3045[2] = {
   0.09786958,
   0.05135861};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3045,Graph_reduced_reduced_fy3045,Graph_reduced_reduced_felx3045,Graph_reduced_reduced_fehx3045,Graph_reduced_reduced_fely3045,Graph_reduced_reduced_fehy3045);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3045 = new TH1F("Graph_Graph_reduced_reduced3045","Graph",2,0,2);
   Graph_Graph_reduced_reduced3045->SetMinimum(-5);
   Graph_Graph_reduced_reduced3045->SetMaximum(5);
   Graph_Graph_reduced_reduced3045->SetDirectory(0);
   Graph_Graph_reduced_reduced3045->SetStats(0);
   Graph_Graph_reduced_reduced3045->SetLineWidth(2);
   Graph_Graph_reduced_reduced3045->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3045->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3045->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3045->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3045);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx67[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy67[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx67,Graph_reduced_reduced_fy67);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced67 = new TH1F("Graph_Graph_reduced_reduced67","Graph",200,0,110);
   Graph_Graph_reduced_reduced67->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced67->SetMaximum(2.4);
   Graph_Graph_reduced_reduced67->SetDirectory(0);
   Graph_Graph_reduced_reduced67->SetStats(0);
   Graph_Graph_reduced_reduced67->SetLineWidth(2);
   Graph_Graph_reduced_reduced67->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced67->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced67->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced67->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced67->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced67->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced67->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced67->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced67->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced67->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced67->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced67->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced67->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced67->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced67->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced67->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced67->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced67);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx68[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy68[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx68,Graph_reduced_reduced_fy68);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced68 = new TH1F("Graph_Graph_reduced_reduced68","Graph",200,0,110);
   Graph_Graph_reduced_reduced68->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced68->SetMaximum(1.2);
   Graph_Graph_reduced_reduced68->SetDirectory(0);
   Graph_Graph_reduced_reduced68->SetStats(0);
   Graph_Graph_reduced_reduced68->SetLineWidth(2);
   Graph_Graph_reduced_reduced68->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced68->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced68->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced68->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced68->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced68->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced68->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced68->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced68->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced68->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced68->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced68->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced68->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced68->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced68->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced68->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced68);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3046[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3046[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3046[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3046[2] = {
   0.09786958,
   0.05135861};
   Double_t Graph_reduced_reduced_fehx3046[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3046[2] = {
   0.09786958,
   0.05135861};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3046,Graph_reduced_reduced_fy3046,Graph_reduced_reduced_felx3046,Graph_reduced_reduced_fehx3046,Graph_reduced_reduced_fely3046,Graph_reduced_reduced_fehy3046);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30453046 = new TH1F("Graph_Graph_Graph_reduced_reduced30453046","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30453046->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30453046->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30453046->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30453046->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30453046->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30453046->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30453046->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30453046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30453046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30453046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30453046->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30453046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30453046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30453046);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx69[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy69[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx69,Graph_reduced_reduced_fy69);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced69 = new TH1F("Graph_Graph_reduced_reduced69","Graph",2,0,2);
   Graph_Graph_reduced_reduced69->SetMinimum(-3.3);
   Graph_Graph_reduced_reduced69->SetMaximum(0.3);
   Graph_Graph_reduced_reduced69->SetDirectory(0);
   Graph_Graph_reduced_reduced69->SetStats(0);
   Graph_Graph_reduced_reduced69->SetLineWidth(2);
   Graph_Graph_reduced_reduced69->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced69->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced69->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced69->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced69->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced69->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced69->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced69->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced69->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced69->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced69->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced69->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced69->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced69->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced69->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced69->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced69->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced69->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced69->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced69);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
