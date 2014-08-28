void simple(){
gROOT->Macro( "$ROOTCOREDIR/scripts/load_packages.C" );
xAOD::Init();

TFile *f = TFile::Open("xAOD_mc.pool.root");
t = xAOD::MakeTransientTree( f );
TCanvas *c =new TCanvas("Electrons","Electrons",0,0,1024, 800);
c->Divide(3,3);
c->cd(1);
t->Draw( "ElectronCollection.pt() - ElectronCollection.trackParticle().pt()" );
c->cd(2);
t->Draw("Muons.pt()");
c->cd(3);
t->Draw("Muons.eta()");

c->cd(7);
t->Draw( "ElectronCollection.pt():ElectronCollection.trackParticle().pt()" );
c->cd(8);
t->Draw("PrimaryVertices.x():PrimaryVertices.y():PrimaryVertices.z()");
c->cd(9);

t->Draw("PrimaryVertices.x():PrimaryVertices.y():PrimaryVertices.z()","","colz");


TFile *f1 = TFile::Open("output_SM3.pool.root");
t1 = xAOD::MakeTransientTree( f1 );
c->cd(4);
t1->Draw( "ElectronCollection.pt() - ElectronCollection.trackParticle().pt()" );
c->cd(5);
t1->Draw("Muons.pt()");
c->cd(6);
t1->Draw("Muons.eta()");

c->Print("simple.ps");

return;
}
