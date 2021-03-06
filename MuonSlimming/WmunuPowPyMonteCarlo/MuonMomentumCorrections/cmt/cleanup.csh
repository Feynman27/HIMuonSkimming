# echo "cleanup MuonMomentumCorrections MuonMomentumCorrections-00-05-03 in /afs/cern.ch/user/t/tbalestr/public/17.2.10.5/MuonSlimming/WmunuPowPyMonteCarlo"

if ( $?CMTROOT == 0 ) then
  setenv CMTROOT /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/CMT/v1r25
endif
source ${CMTROOT}/mgr/setup.csh
set cmtMuonMomentumCorrectionstempfile=`${CMTROOT}/mgr/cmt -quiet build temporary_name`
if $status != 0 then
  set cmtMuonMomentumCorrectionstempfile=/tmp/cmt.$$
endif
${CMTROOT}/mgr/cmt cleanup -csh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.10.5/MuonSlimming/WmunuPowPyMonteCarlo  $* >${cmtMuonMomentumCorrectionstempfile}
if ( $status != 0 ) then
  echo "${CMTROOT}/mgr/cmt cleanup -csh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.10.5/MuonSlimming/WmunuPowPyMonteCarlo  $* >${cmtMuonMomentumCorrectionstempfile}"
  set cmtcleanupstatus=2
  /bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
  unset cmtMuonMomentumCorrectionstempfile
  exit $cmtcleanupstatus
endif
set cmtcleanupstatus=0
source ${cmtMuonMomentumCorrectionstempfile}
if ( $status != 0 ) then
  set cmtcleanupstatus=2
endif
/bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
unset cmtMuonMomentumCorrectionstempfile
exit $cmtcleanupstatus

