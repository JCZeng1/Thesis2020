void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:47:02 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3005[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3005[2] = {
   0.8864514,
   1.029343};
   Double_t Graph_reduced_reduced_felx3005[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3005[2] = {
   0.09370949,
   0.04643308};
   Double_t Graph_reduced_reduced_fehx3005[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3005[2] = {
   0.09370949,
   0.04643308};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3005,Graph_reduced_reduced_fy3005,Graph_reduced_reduced_felx3005,Graph_reduced_reduced_fehx3005,Graph_reduced_reduced_fely3005,Graph_reduced_reduced_fehy3005);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3005 = new TH1F("Graph_Graph_reduced_reduced3005","Graph",2,0,2);
   Graph_Graph_reduced_reduced3005->SetMinimum(-5);
   Graph_Graph_reduced_reduced3005->SetMaximum(5);
   Graph_Graph_reduced_reduced3005->SetDirectory(0);
   Graph_Graph_reduced_reduced3005->SetStats(0);
   Graph_Graph_reduced_reduced3005->SetLineWidth(2);
   Graph_Graph_reduced_reduced3005->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3005->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3005->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3005->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3005);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx7[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy7[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx7,Graph_reduced_reduced_fy7);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced7 = new TH1F("Graph_Graph_reduced_reduced7","Graph",200,0,110);
   Graph_Graph_reduced_reduced7->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced7->SetMaximum(2.4);
   Graph_Graph_reduced_reduced7->SetDirectory(0);
   Graph_Graph_reduced_reduced7->SetStats(0);
   Graph_Graph_reduced_reduced7->SetLineWidth(2);
   Graph_Graph_reduced_reduced7->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced7->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced7->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced7->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced7->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced7->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced7->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced7->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced7->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced7->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced7->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced7->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced7->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced7->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced7->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced7->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced7);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx8[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy8[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx8,Graph_reduced_reduced_fy8);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced8 = new TH1F("Graph_Graph_reduced_reduced8","Graph",200,0,110);
   Graph_Graph_reduced_reduced8->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced8->SetMaximum(1.2);
   Graph_Graph_reduced_reduced8->SetDirectory(0);
   Graph_Graph_reduced_reduced8->SetStats(0);
   Graph_Graph_reduced_reduced8->SetLineWidth(2);
   Graph_Graph_reduced_reduced8->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced8->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced8->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced8->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced8->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced8->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced8->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced8->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced8->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced8->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced8->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced8->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced8->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced8->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced8->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced8->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced8);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3006[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3006[2] = {
   0.8864514,
   1.029343};
   Double_t Graph_reduced_reduced_felx3006[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3006[2] = {
   0.09370949,
   0.04643308};
   Double_t Graph_reduced_reduced_fehx3006[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3006[2] = {
   0.09370949,
   0.04643308};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3006,Graph_reduced_reduced_fy3006,Graph_reduced_reduced_felx3006,Graph_reduced_reduced_fehx3006,Graph_reduced_reduced_fely3006,Graph_reduced_reduced_fehy3006);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30053006 = new TH1F("Graph_Graph_Graph_reduced_reduced30053006","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30053006->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30053006->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30053006->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30053006->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30053006->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30053006->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30053006->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30053006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30053006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30053006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30053006->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30053006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30053006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30053006);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx9[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy9[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx9,Graph_reduced_reduced_fy9);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced9 = new TH1F("Graph_Graph_reduced_reduced9","Graph",2,0,2);
   Graph_Graph_reduced_reduced9->SetMinimum(-3.6);
   Graph_Graph_reduced_reduced9->SetMaximum(3.6);
   Graph_Graph_reduced_reduced9->SetDirectory(0);
   Graph_Graph_reduced_reduced9->SetStats(0);
   Graph_Graph_reduced_reduced9->SetLineWidth(2);
   Graph_Graph_reduced_reduced9->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced9->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced9->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced9->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced9->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced9->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced9->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced9->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced9->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced9->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced9->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced9->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced9->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced9->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced9->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced9->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced9->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced9->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced9);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
