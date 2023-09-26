void NP_FloatNorm()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 26 05:55:23 2022) by ROOT version 6.22/06
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
   
   Double_t Graph_reduced_reduced_fx3025[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3025[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3025[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3025[2] = {
   0.07304182,
   0.03857621};
   Double_t Graph_reduced_reduced_fehx3025[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3025[2] = {
   0.07304182,
   0.03857621};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3025,Graph_reduced_reduced_fy3025,Graph_reduced_reduced_felx3025,Graph_reduced_reduced_fehx3025,Graph_reduced_reduced_fely3025,Graph_reduced_reduced_fehy3025);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced3025 = new TH1F("Graph_Graph_reduced_reduced3025","Graph",2,0,2);
   Graph_Graph_reduced_reduced3025->SetMinimum(-5);
   Graph_Graph_reduced_reduced3025->SetMaximum(5);
   Graph_Graph_reduced_reduced3025->SetDirectory(0);
   Graph_Graph_reduced_reduced3025->SetStats(0);
   Graph_Graph_reduced_reduced3025->SetLineWidth(2);
   Graph_Graph_reduced_reduced3025->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced3025->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetTitle("pull");
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_reduced_reduced3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced3025->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced3025->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced3025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_reduced_reduced3025);
   
   grae->Draw("pa");
   
   Double_t Graph_reduced_reduced_fx37[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy37[6] = {
   2,
   2,
   2,
   -2,
   -2,
   -2};
   TGraph *graph = new TGraph(6,Graph_reduced_reduced_fx37,Graph_reduced_reduced_fy37);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced37 = new TH1F("Graph_Graph_reduced_reduced37","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced37->SetMinimum(-2.4);
   Graph_Graph_reduced_reduced37->SetMaximum(2.4);
   Graph_Graph_reduced_reduced37->SetDirectory(0);
   Graph_Graph_reduced_reduced37->SetStats(0);
   Graph_Graph_reduced_reduced37->SetLineWidth(2);
   Graph_Graph_reduced_reduced37->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced37->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced37->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced37->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced37->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced37->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced37->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced37->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced37->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced37->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced37->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced37->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced37);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx38[6] = {
   0,
   1,
   2,
   2,
   1,
   0};
   Double_t Graph_reduced_reduced_fy38[6] = {
   1,
   1,
   1,
   -1,
   -1,
   -1};
   graph = new TGraph(6,Graph_reduced_reduced_fx38,Graph_reduced_reduced_fy38);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced38 = new TH1F("Graph_Graph_reduced_reduced38","Graph",276,0,151.8);
   Graph_Graph_reduced_reduced38->SetMinimum(-1.2);
   Graph_Graph_reduced_reduced38->SetMaximum(1.2);
   Graph_Graph_reduced_reduced38->SetDirectory(0);
   Graph_Graph_reduced_reduced38->SetStats(0);
   Graph_Graph_reduced_reduced38->SetLineWidth(2);
   Graph_Graph_reduced_reduced38->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced38->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced38->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced38->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced38->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced38->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced38->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced38->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced38->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced38->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced38->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced38->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced38->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced38->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced38->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced38->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced38);
   
   graph->Draw("f");
   
   Double_t Graph_reduced_reduced_fx3026[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy3026[2] = {
   1,
   1};
   Double_t Graph_reduced_reduced_felx3026[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fely3026[2] = {
   0.07304182,
   0.03857621};
   Double_t Graph_reduced_reduced_fehx3026[2] = {
   0.1666667,
   0.1666667};
   Double_t Graph_reduced_reduced_fehy3026[2] = {
   0.07304182,
   0.03857621};
   grae = new TGraphAsymmErrors(2,Graph_reduced_reduced_fx3026,Graph_reduced_reduced_fy3026,Graph_reduced_reduced_felx3026,Graph_reduced_reduced_fehx3026,Graph_reduced_reduced_fely3026,Graph_reduced_reduced_fehy3026);
   grae->SetName("Graph_reduced_reduced");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_reduced_reduced30253026 = new TH1F("Graph_Graph_Graph_reduced_reduced30253026","Graph",2,0,2);
   Graph_Graph_Graph_reduced_reduced30253026->SetMinimum(-5);
   Graph_Graph_Graph_reduced_reduced30253026->SetMaximum(5);
   Graph_Graph_Graph_reduced_reduced30253026->SetDirectory(0);
   Graph_Graph_Graph_reduced_reduced30253026->SetStats(0);
   Graph_Graph_Graph_reduced_reduced30253026->SetLineWidth(2);
   Graph_Graph_Graph_reduced_reduced30253026->SetMarkerStyle(20);
   Graph_Graph_Graph_reduced_reduced30253026->SetMarkerSize(1.2);
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_Graph_reduced_reduced30253026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetTitle("pull");
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetTitleOffset(0.5);
   Graph_Graph_Graph_reduced_reduced30253026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_reduced_reduced30253026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_reduced_reduced30253026->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_Graph_reduced_reduced30253026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_reduced_reduced30253026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_reduced_reduced30253026);
   
   grae->Draw("p");
   
   Double_t Graph_reduced_reduced_fx39[2] = {
   0.5,
   1.5};
   Double_t Graph_reduced_reduced_fy39[2] = {
   0,
   0};
   graph = new TGraph(2,Graph_reduced_reduced_fx39,Graph_reduced_reduced_fy39);
   graph->SetName("Graph_reduced_reduced");
   graph->SetTitle("Graph");
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_reduced_reduced39 = new TH1F("Graph_Graph_reduced_reduced39","Graph",2,0,2);
   Graph_Graph_reduced_reduced39->SetMinimum(-1.49318e-14);
   Graph_Graph_reduced_reduced39->SetMaximum(1.357436e-15);
   Graph_Graph_reduced_reduced39->SetDirectory(0);
   Graph_Graph_reduced_reduced39->SetStats(0);
   Graph_Graph_reduced_reduced39->SetLineWidth(2);
   Graph_Graph_reduced_reduced39->SetMarkerStyle(20);
   Graph_Graph_reduced_reduced39->SetMarkerSize(1.2);
   Graph_Graph_reduced_reduced39->GetXaxis()->SetBinLabel(1,"norm_Vjets0LepMerged");
   Graph_Graph_reduced_reduced39->GetXaxis()->SetBinLabel(2,"norm_Vjets0LepResolved");
   Graph_Graph_reduced_reduced39->GetXaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced39->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced39->GetXaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced39->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced39->GetXaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced39->GetYaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced39->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced39->GetYaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced39->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_reduced_reduced39->GetYaxis()->SetTitleFont(42);
   Graph_Graph_reduced_reduced39->GetZaxis()->SetLabelFont(42);
   Graph_Graph_reduced_reduced39->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph_reduced_reduced39->GetZaxis()->SetTitleSize(0.03);
   Graph_Graph_reduced_reduced39->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_reduced_reduced39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_reduced_reduced39);
   
   graph->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
