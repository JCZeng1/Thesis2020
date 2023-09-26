void fitConst_resolved_CR()
{
//=========Macro generated from canvas: c1_n5/
//=========  (Fri Nov 12 19:48:41 2021) by ROOT version 6.24/06
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
   pad->Range(-0.3855421,1.05,4.433735,1.55);
   pad->SetFillColor(0);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetLeftMargin(0.08);
   pad->SetFrameBorderMode(0);
   pad->SetFrameBorderMode(0);
   
   TH1D *__37 = new TH1D("__37","Const Summary - Resolved CR",4,0,4);
   __37->SetBinContent(1,1.187);
   __37->SetBinContent(2,1.275);
   __37->SetBinContent(3,1.156);
   __37->SetBinContent(4,1.194);
   __37->SetBinError(1,0.005);
   __37->SetBinError(2,0.008);
   __37->SetBinError(3,0.006);
   __37->SetBinError(4,0.006);
   __37->SetMinimum(1.1);
   __37->SetMaximum(1.5);
   __37->SetEntries(4);
   __37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   __37->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   __37->SetMarkerColor(ci);
   __37->SetMarkerStyle(20);
   __37->GetXaxis()->SetBinLabel(1,"combined");
   __37->GetXaxis()->SetBinLabel(2,"mc16a");
   __37->GetXaxis()->SetBinLabel(3,"mc16d");
   __37->GetXaxis()->SetBinLabel(4,"mc16e");
   __37->GetXaxis()->SetLabelFont(42);
   __37->GetXaxis()->SetLabelSize(0.06);
   __37->GetXaxis()->SetTickLength(0);
   __37->GetXaxis()->SetTitleOffset(1);
   __37->GetXaxis()->SetTitleFont(42);
   __37->GetYaxis()->SetLabelFont(42);
   __37->GetYaxis()->SetTitleOffset(0.8);
   __37->GetYaxis()->SetTitleFont(42);
   __37->GetZaxis()->SetLabelFont(42);
   __37->GetZaxis()->SetTitleOffset(1);
   __37->GetZaxis()->SetTitleFont(42);
   __37->Draw("P0");
   
   TPaveText *pt = new TPaveText(0.1938591,0.9339831,0.8061409,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Const Summary - Resolved CR");
   pt->Draw();
   pad->Modified();
   c1_n5->cd();
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
