void NP_Norm()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 28 09:47:02 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3007[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3007[3] = {
   -0.1614612,
   -0.3302305,
   0.1643732};
   Double_t Graph_reduced_reduced_felx3007[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3007[3] = {
   1.000541,
   0.9794788,
   0.6217701};
   Double_t Graph_reduced_reduced_fehx3007[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3007[3] = {
   1.000541,
   0.9794788,
   0.6217701};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3007,Graph_reduced_reduced_fy3007,Graph_reduced_reduced_felx3007,Graph_reduced_reduced_fehx3007,Graph_reduced_reduced_fely3007,Graph_reduced_reduced_fehy3007);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3007 = new TH1F("Graph_Graph_reduced_reduced3007","Graph",3,0,3);
   Graph_Graph_reduced_reduced3007->SetMinimum(-5);
   Graph_Graph_reduced_reduced3007->SetMaximum(5);
   Graph_Graph_reduced_reduced3007->SetDirectory(0);
   Graph_Graph_reduced_reduced3007->SetStats(0);
   Graph_Graph_reduced_reduced3007->SetLineWidth(2);
   Graph_Graph_reduced_reduced3007->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3007->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3007->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3007->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3007);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx10[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy10[8] = {
   2,
   2,
   2,
   2,
   -2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(8,Graph_reduced_reduced_fx10,Graph_reduced_reduced_fy10);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced10 = new TH1F("Graph_Graph_reduced_reduced10","Graph",200,0,110);
   Graph_Graph_reduced_reduced10->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced10->SetMaximum(2.4);
   Graph_Graph_reduced_reduced10->SetDirectory(0);
   Graph_Graph_reduced_reduced10->SetStats(0);
   Graph_Graph_reduced_reduced10->SetLineWidth(2);
   Graph_Graph_reduced_reduced10->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced10->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced10->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced10->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced10->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced10->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced10->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced10->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced10->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced10->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced10->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced10->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced10->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced10->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced10->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced10->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced10);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx11[8] = {
   0,
   1,
   2,
   3,
   3,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy11[8] = {
   1,
   1,
   1,
   1,
   -1,
   -1,
   -1,
   -1};
   graph = new TGraph(8,Graph_reduced_reduced_fx11,Graph_reduced_reduced_fy11);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced11 = new TH1F("Graph_Graph_reduced_reduced11","Graph",200,0,110);
   Graph_Graph_reduced_reduced11->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced11->SetMaximum(1.2);
   Graph_Graph_reduced_reduced11->SetDirectory(0);
   Graph_Graph_reduced_reduced11->SetStats(0);
   Graph_Graph_reduced_reduced11->SetLineWidth(2);
   Graph_Graph_reduced_reduced11->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced11->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced11->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced11->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced11->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced11->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced11->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced11->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced11->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced11->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced11);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3008[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy3008[3] = {
   -0.1614612,
   -0.3302305,
   0.1643732};
   Double_t Graph_reduced_reduced_felx3008[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3008[3] = {
   1.000541,
   0.9794788,
   0.6217701};
   Double_t Graph_reduced_reduced_fehx3008[3] = {
   0.1666667,
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3008[3] = {
   1.000541,
   0.9794788,
   0.6217701};
   grae = new TGraphAsymmErrors(3,Graph_reduced_reduced_fx3008,Graph_reduced_reduced_fy3008,Graph_reduced_reduced_felx3008,Graph_reduced_reduced_fehx3008,Graph_reduced_reduced_fely3008,Graph_reduced_reduced_fehy3008);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30073008 = new TH1F("Graph_Graph_Graph_reduced_reduced30073008","Graph",3,0,3);
   Graph_Graph_Graph_reduced_reduced30073008->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30073008->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30073008->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30073008->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30073008->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30073008->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30073008->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30073008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30073008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30073008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30073008->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30073008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30073008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30073008);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx12[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph_reduced_reduced_fy12[3] = {
   -3,
   -1.638475,
   0.2098739};
   graph = new TGraph(3,Graph_reduced_reduced_fx12,Graph_reduced_reduced_fy12);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced12 = new TH1F("Graph_Graph_reduced_reduced12","Graph",3,0,3);
   Graph_Graph_reduced_reduced12->SetMinimum(-3.6);
   Graph_Graph_reduced_reduced12->SetMaximum(3.6);
   Graph_Graph_reduced_reduced12->SetDirectory(0);
   Graph_Graph_reduced_reduced12->SetStats(0);
   Graph_Graph_reduced_reduced12->SetLineWidth(2);
   Graph_Graph_reduced_reduced12->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced12->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced12->GetXaxis()->SetBinLabel(1,"NormStop");
   Graph_Graph_reduced_reduced12->GetXaxis()->SetBinLabel(2,"Normdiboson0Lep");
   Graph_Graph_reduced_reduced12->GetXaxis()->SetBinLabel(3,"Normttbar0Lep");
   Graph_Graph_reduced_reduced12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced12->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced12->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced12->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced12->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced12->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced12->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced12->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced12->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced12->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced12);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
