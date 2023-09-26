void fitSlope_resolved_CR()
{
//=========Macro generated from canvas: c1_n5/
//=========  (Fri Nov 12 19:42:46 2021) by ROOT version 6.24/06
   TCanvas *c1_n5 = new TCanvas("c1_n5", "",0,0,600,500);
   gStyle->SetOptStat(0);
   c1_n5->SetHighLightColor(2);
   c1_n5->Range(0,0,1,1);
   c1_n5->SetFillColor(0);
   c1_n5->SetBorderMode(0);
   c1_n5->SetBorderSize(2);
   c1_n5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: 
   TPad *pad = new TPad("", "",0,0,1,1);
   pad->Draw();
   pad->cd();
   pad->Range(-0.3855421,-0.00036,4.433735,4e-05);
   pad->SetFillColor(0);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetLeftMargin(0.08);
   pad->SetFrameBorderMode(0);
   pad->SetFrameBorderMode(0);
   
   TH1D *__25 = new TH1D("__25","Slope Summary - Resolved CR",4,0,4);
   __25->SetBinContent(1,-0.000175);
   __25->SetBinContent(2,-0.000264);
   __25->SetBinContent(3,-0.000218);
   __25->SetBinContent(4,-0.000184);
   __25->SetBinError(1,5e-06);
   __25->SetBinError(2,5e-06);
   __25->SetBinError(3,5e-06);
   __25->SetBinError(4,4e-06);
   __25->SetMinimum(-0.00016);
   __25->SetMaximum(-0.0003);
   __25->SetEntries(4);
   __25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   __25->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   __25->SetMarkerColor(ci);
   __25->SetMarkerStyle(20);
   __25->GetXaxis()->SetBinLabel(1,"combined");
   __25->GetXaxis()->SetBinLabel(2,"mc16a");
   __25->GetXaxis()->SetBinLabel(3,"mc16d");
   __25->GetXaxis()->SetBinLabel(4,"mc16e");
   __25->GetXaxis()->SetLabelFont(42);
   __25->GetXaxis()->SetLabelSize(0.06);
   __25->GetXaxis()->SetTickLength(0);
   __25->GetXaxis()->SetTitleOffset(1);
   __25->GetXaxis()->SetTitleFont(42);
   __25->GetYaxis()->SetLabelFont(42);
   __25->GetYaxis()->SetTitleOffset(0.8);
   __25->GetYaxis()->SetTitleFont(42);
   __25->GetZaxis()->SetLabelFont(42);
   __25->GetZaxis()->SetTitleOffset(1);
   __25->GetZaxis()->SetTitleFont(42);
   __25->Draw("P0");
   
   TPaveText *pt = new TPaveText(0.1963758,0.9339831,0.8036242,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Slope Summary - Resolved CR");
   pt->Draw();
   pad->Modified();
   c1_n5->cd();
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
