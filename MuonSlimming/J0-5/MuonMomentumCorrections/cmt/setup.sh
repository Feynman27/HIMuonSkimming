# echo "setup MuonMomentumCorrections MuonMomentumCorrections-00-05-03 in /afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple"

if test "${CMTROOT}" = ""; then
  CMTROOT=/cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/CMT/v1r24; export CMTROOT
fi
. ${CMTROOT}/mgr/setup.sh
cmtMuonMomentumCorrectionstempfile=`${CMTROOT}/mgr/cmt -quiet build temporary_name`
if test ! $? = 0 ; then cmtMuonMomentumCorrectionstempfile=/tmp/cmt.$$; fi
${CMTROOT}/mgr/cmt setup -sh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/mnt/Lustre/cgrp/atlas_hi/tbalestri/MuonSlimming/  -no_cleanup $* >${cmtMuonMomentumCorrectionstempfile}
if test $? != 0 ; then
  echo >&2 "${CMTROOT}/mgr/cmt setup -sh -pack=MuonMomentumCorrections -version=MuonMomentumCorrections-00-05-03 -path=/mnt/Lustre/cgrp/atlas_hi/tbalestri/MuonSlimming/  -no_cleanup $* >${cmtMuonMomentumCorrectionstempfile}"
  cmtsetupstatus=2
  /bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
  unset cmtMuonMomentumCorrectionstempfile
  return $cmtsetupstatus
fi
cmtsetupstatus=0
. ${cmtMuonMomentumCorrectionstempfile}
if test $? != 0 ; then
  cmtsetupstatus=2
fi
/bin/rm -f ${cmtMuonMomentumCorrectionstempfile}
unset cmtMuonMomentumCorrectionstempfile
return $cmtsetupstatus

