#  GOLDEN JSON
# pp: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt
# PbPb: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/HI/Cert_262548-263757_PromptReco_HICollisions15_JSON_v2.txt
#  DIMUON JSON
# pp: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON_MuonPhys.txt
# PbPb: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/HI/Cert_262548-263757_PromptReco_HICollisions15_JSON_MuonPhys_v2.txt
#  TRACKERONLY JSON
# PbPb: /afs/cern.ch/work/j/jisun/public/forjing/Cert_263685-263757_PromptReco_HICollisions15_TrackerOnly_JSON.txt


#brilcalc lumi -i /afs/cern.ch/work/j/jisun/public/forjing/Cert_263685-263757_PromptReco_HICollisions15_TrackerOnly_JSON.txt --hltpath HLT_HIDmesonHITrackingGlobal_Dpt60_v1
#brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt --hltpath HLT_DmesonPPTrackingGlobal_Dpt50_v1 -u /pb
brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt -u /ub --hltpath HLT_DmesonPPTrackingGlobal_Dpt8_v1
brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt -u /ub --hltpath HLT_DmesonPPTrackingGlobal_Dpt15_v1
brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt -u /ub --hltpath HLT_DmesonPPTrackingGlobal_Dpt30_v1
brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt -u /ub --hltpath HLT_DmesonPPTrackingGlobal_Dpt50_v1
brilcalc lumi --normtag pcc5TeV15v3 -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/5TeV/Cert_262081-262328_5TeV_PromptReco_Collisions15_25ns_JSON.txt -u /ub 
#brilcalc lumi -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions15/HI/Cert_262548-263757_PromptReco_HICollisions15_JSON_v2.txt --hltpath HLT_HIL1MinimumBiasHF2AND_part1_v1