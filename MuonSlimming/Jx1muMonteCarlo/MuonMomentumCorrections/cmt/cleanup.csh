# echo "cleanup MuonMomentumCorrections MuonMomentumCorrections-00-05-03 in /afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple"

if ( $?CMTROOT == 0 ) then
  setenv CMTROOT /cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/CMT/v1r24
endif
source ${CMTROOT}/mgr/setup.csh
set cmtMuonMomentumCorrectionstempfile=`${CMTROOT}/mgr/cmt -quiet build temporary_name`
if $status != 0 then
  set cmtMuonMomentumCorrectionstempfile=/tmp/cmt.$$
endif
${CMTROOT}/mgr/cmt cleanup -csh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple  $* >${cmtMuonMomentumCorrectionstempfile}
if ( $status != 0 ) then
  echo "${CMTROOT}/mgr/cmt cleanup -csh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple  $* >${cmtMuonMomentumCorrectionstempfile}"
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

