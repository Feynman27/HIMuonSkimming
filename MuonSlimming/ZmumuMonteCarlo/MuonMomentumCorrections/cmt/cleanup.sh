# echo "cleanup MuonMomentumCorrections MuonMomentumCorrections-00-05-03 in /afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple"

if test "${CMTROOT}" = ""; then
  CMTROOT=/cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/CMT/v1r24; export CMTROOT
fi
. ${CMTROOT}/mgr/setup.sh
cmtMuonMomentumCorrectionstempfile=`${CMTROOT}/mgr/cmt -quiet build temporary_name`
if test ! $? = 0 ; then cmtMuonMomentumCorrectionstempfile=/tmp/cmt.$$; fi
${CMTROOT}/mgr/cmt cleanup -sh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple  $* >${cmtMuonMomentumCorrectionstempfile}
if test $? != 0 ; then
  echo >&2 "${CMTROOT}/mgr/cmt cleanup -sh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple  $* >${cmtMuonMomentumCorrectionstempfile}"
  cmtcleanupstatus=2
  /bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
  unset cmtMuonMomentumCorrectionstempfile
  return $cmtcleanupstatus
fi
cmtcleanupstatus=0
. ${cmtMuonMomentumCorrectionstempfile}
if test $? != 0 ; then
  cmtcleanupstatus=2
fi
/bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
unset cmtMuonMomentumCorrectionstempfile
return $cmtcleanupstatus

