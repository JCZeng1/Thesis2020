void fitConst_merged_CR()
{
//=========Macro generated from canvas: c1_n5/
//=========  (Fri Nov 12 19:48:12 2021) by ROOT version 6.24/06
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
   
   TH1D *__36 = new TH1D("__36","Const Summary - Merged CR",4,0,4);
   __36->SetBinContent(1,1.298);
   __36->SetBinContent(2,1.305);
   __36->SetBinContent(3,1.275);
   __36->SetBinContent(4,1.313);
   __36->SetBinError(1,0.031);
   __36->SetBinError(2,0.048);
   __36->SetBinError(3,0.034);
   __36->SetBinError(4,0.032);
   __36->SetMinimum(1.1);
   __36->SetMaximum(1.5);
   __36->SetEntries(4);
   __36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   __36->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   __36->SetMarkerColor(ci);
   __36->SetMarkerStyle(20);
   __36->GetXaxis()->SetBinLabel(1,"combined");
   __36->GetXaxis()->SetBinLabel(2,"mc16a");
   __36->GetXaxis()->SetBinLabel(3,"mc16d");
   __36->GetXaxis()->SetBinLabel(4,"mc16e");
   __36->GetXaxis()->SetLabelFont(42);
   __36->GetXaxis()->SetLabelSize(0.06);
   __36->GetXaxis()->SetTickLength(0);
   __36->GetXaxis()->SetTitleOffset(1);
   __36->GetXaxis()->SetTitleFont(42);
   __36->GetYaxis()->SetLabelFont(42);
   __36->GetYaxis()->SetTitleOffset(0.8);
   __36->GetYaxis()->SetTitleFont(42);
   __36->GetZaxis()->SetLabelFont(42);
   __36->GetZaxis()->SetTitleOffset(1);
   __36->GetZaxis()->SetTitleFont(42);
   __36->Draw("P0");
   
   TPaveText *pt = new TPaveText(0.2123154,0.9339831,0.7876846,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Const Summary - Merged CR");
   pt->Draw();
   pad->Modified();
   c1_n5->cd();
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
