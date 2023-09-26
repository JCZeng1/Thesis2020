void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:50:06 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3055[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3055[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3055[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3055[2] = {
   0.05367682,
   0.01777987};
   Double_t Graph_reduced_reduced_fehx3055[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3055[2] = {
   0.05367682,
   0.01777987};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3055,Graph_reduced_reduced_fy3055,Graph_reduced_reduced_felx3055,Graph_reduced_reduced_fehx3055,Graph_reduced_reduced_fely3055,Graph_reduced_reduced_fehy3055);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3055 = new TH1F("Graph_Graph_reduced_reduced3055","Graph",2,0,2);
   Graph_Graph_reduced_reduced3055->SetMinimum(-5);
   Graph_Graph_reduced_reduced3055->SetMaximum(5);
   Graph_Graph_reduced_reduced3055->SetDirectory(0);
   Graph_Graph_reduced_reduced3055->SetStats(0);
   Graph_Graph_reduced_reduced3055->SetLineWidth(2);
   Graph_Graph_reduced_reduced3055->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3055->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3055->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3055->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3055->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3055->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3055->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3055);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx82[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy82[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx82,Graph_reduced_reduced_fy82);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced82 = new TH1F("Graph_Graph_reduced_reduced82","Graph",200,0,110);
   Graph_Graph_reduced_reduced82->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced82->SetMaximum(2.4);
   Graph_Graph_reduced_reduced82->SetDirectory(0);
   Graph_Graph_reduced_reduced82->SetStats(0);
   Graph_Graph_reduced_reduced82->SetLineWidth(2);
   Graph_Graph_reduced_reduced82->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced82->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced82->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced82->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced82->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced82->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced82->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced82->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced82->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced82->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced82->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced82->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced82->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced82->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced82->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced82->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced82);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx83[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy83[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx83,Graph_reduced_reduced_fy83);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced83 = new TH1F("Graph_Graph_reduced_reduced83","Graph",200,0,110);
   Graph_Graph_reduced_reduced83->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced83->SetMaximum(1.2);
   Graph_Graph_reduced_reduced83->SetDirectory(0);
   Graph_Graph_reduced_reduced83->SetStats(0);
   Graph_Graph_reduced_reduced83->SetLineWidth(2);
   Graph_Graph_reduced_reduced83->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced83->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced83->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced83->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced83->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced83->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced83->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced83->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced83->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced83->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced83->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced83->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced83->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced83->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced83->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced83->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced83->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced83);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3056[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3056[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3056[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3056[2] = {
   0.05367682,
   0.01777987};
   Double_t Graph_reduced_reduced_fehx3056[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3056[2] = {
   0.05367682,
   0.01777987};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3056,Graph_reduced_reduced_fy3056,Graph_reduced_reduced_felx3056,Graph_reduced_reduced_fehx3056,Graph_reduced_reduced_fely3056,Graph_reduced_reduced_fehy3056);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30553056 = new TH1F("Graph_Graph_Graph_reduced_reduced30553056","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30553056->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30553056->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30553056->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30553056->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30553056->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30553056->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30553056->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30553056->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30553056->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30553056->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30553056->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30553056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30553056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30553056);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx84[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy84[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx84,Graph_reduced_reduced_fy84);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced84 = new TH1F("Graph_Graph_reduced_reduced84","Graph",2,0,2);
   Graph_Graph_reduced_reduced84->SetMinimum(0);
   Graph_Graph_reduced_reduced84->SetMaximum(1.1);
   Graph_Graph_reduced_reduced84->SetDirectory(0);
   Graph_Graph_reduced_reduced84->SetStats(0);
   Graph_Graph_reduced_reduced84->SetLineWidth(2);
   Graph_Graph_reduced_reduced84->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced84->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced84->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced84->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced84->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced84->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced84->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced84->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced84->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced84->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced84->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced84->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced84->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced84->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced84->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced84->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced84->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced84->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced84);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
