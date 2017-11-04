__int64 __fastcall sub_850(__int64 a1)
{

  LODWORD(v2) = sub_110F4(&v1055, 48LL);
  v905 = v2;
  LODWORD(v3) = sub_1110E(&v1055);
  while ( v905 != v3 )
  {
    v4 = *v905;
    v1 = (unsigned int)*v905;
    *(&importmedieum[20 * (signed int)v4] + SHIDWORD(v4)) = *(_BYTE *)(a1 + 20LL * (signed int)v4 + SHIDWORD(v4));
    v755 = *(_BYTE *)(a1 + 20LL * (signed int)v4 + SHIDWORD(v4)) - 48;
    if ( v755 <= 0 || v755 > 9 )
      v454 = 0;
    if ( (v605 >> v755) & 1 )
      v454 = 0;
    v605 |= 1 << v755;
    v455 += v755;
    ++v905;
  }
  if ( v455 != 17 )
    v454 = 0;
  v456 = 0;
  v606 = 0;
  LODWORD(v5) = sub_110F4(&v1059, v1);
  v906 = v5;
  LODWORD(v6) = sub_1110E(&v1059);
  while ( v906 != v6 )
  {
    v7 = *v906;
    v1 = (unsigned int)*v906;
    *(&importmedieum[20 * (signed int)v7] + SHIDWORD(v7)) = *(_BYTE *)(a1 + 20LL * (signed int)v7 + SHIDWORD(v7));
    v756 = *(_BYTE *)(a1 + 20LL * (signed int)v7 + SHIDWORD(v7)) - 48;
    if ( v756 <= 0 || v756 > 9 )
      v454 = 0;
    if ( (v606 >> v756) & 1 )
      v454 = 0;
    v606 |= 1 << v756;
    v456 += v756;
    ++v906;
  }
  if ( v456 != 3 )
    v454 = 0;
  v457 = 0;
  v607 = 0;
  LODWORD(v8) = sub_110F4(&v1063, v1);
  v907 = v8;
  LODWORD(v9) = sub_1110E(&v1063);
  while ( v907 != v9 )
  {
    v10 = *v907;
    v1 = (unsigned int)*v907;
    *(&importmedieum[20 * (signed int)v10] + SHIDWORD(v10)) = *(_BYTE *)(a1 + 20LL * (signed int)v10 + SHIDWORD(v10));
    v757 = *(_BYTE *)(a1 + 20LL * (signed int)v10 + SHIDWORD(v10)) - 48;
    if ( v757 <= 0 || v757 > 9 )
      v454 = 0;
    if ( (v607 >> v757) & 1 )
      v454 = 0;
    v607 |= 1 << v757;
    v457 += v757;
    ++v907;
  }
  if ( v457 != 3 )
    v454 = 0;
  v458 = 0;
  v608 = 0;
  LODWORD(v11) = sub_1112C(&v1463);
  v908 = v11;
  LODWORD(v12) = sub_11146(&v1463);
  while ( v908 != v12 )
  {
    v13 = *v908;
    v1 = (unsigned int)*v908;
    *(&importmedieum[20 * (signed int)v13] + SHIDWORD(v13)) = *(_BYTE *)(a1 + 20LL * (signed int)v13 + SHIDWORD(v13));
    v758 = *(_BYTE *)(a1 + 20LL * (signed int)v13 + SHIDWORD(v13)) - 48;
    if ( v758 <= 0 || v758 > 9 )
      v454 = 0;
    if ( (v608 >> v758) & 1 )
      v454 = 0;
    v608 |= 1 << v758;
    v458 += v758;
    ++v908;
  }
  if ( v458 != 24 )
    v454 = 0;
  v459 = 0;
  v609 = 0;
  LODWORD(v14) = sub_110F4(&v1067, v1);
  v909 = v14;
  LODWORD(v15) = sub_1110E(&v1067);
  while ( v909 != v15 )
  {
    v16 = *v909;
    v1 = (unsigned int)*v909;
    *(&importmedieum[20 * (signed int)v16] + SHIDWORD(v16)) = *(_BYTE *)(a1 + 20LL * (signed int)v16 + SHIDWORD(v16));
    v759 = *(_BYTE *)(a1 + 20LL * (signed int)v16 + SHIDWORD(v16)) - 48;
    if ( v759 <= 0 || v759 > 9 )
      v454 = 0;
    if ( (v609 >> v759) & 1 )
      v454 = 0;
    v609 |= 1 << v759;
    v459 += v759;
    ++v909;
  }
  if ( v459 != 4 )
    v454 = 0;
  v460 = 0;
  v610 = 0;
  LODWORD(v17) = sub_110F4(&v1071, v1);
  v910 = v17;
  LODWORD(v18) = sub_1110E(&v1071);
  while ( v910 != v18 )
  {
    v19 = *v910;
    v1 = (unsigned int)*v910;
    *(&importmedieum[20 * (signed int)v19] + SHIDWORD(v19)) = *(_BYTE *)(a1 + 20LL * (signed int)v19 + SHIDWORD(v19));
    v760 = *(_BYTE *)(a1 + 20LL * (signed int)v19 + SHIDWORD(v19)) - 48;
    if ( v760 <= 0 || v760 > 9 )
      v454 = 0;
    if ( (v610 >> v760) & 1 )
      v454 = 0;
    v610 |= 1 << v760;
    v460 += v760;
    ++v910;
  }
  if ( v460 != 11 )
    v454 = 0;
  v461 = 0;
  v611 = 0;
  LODWORD(v20) = sub_1112C(&v1469);
  v911 = v20;
  LODWORD(v21) = sub_11146(&v1469);
  while ( v911 != v21 )
  {
    v22 = *v911;
    v1 = (unsigned int)*v911;
    *(&importmedieum[20 * (signed int)v22] + SHIDWORD(v22)) = *(_BYTE *)(a1 + 20LL * (signed int)v22 + SHIDWORD(v22));
    v761 = *(_BYTE *)(a1 + 20LL * (signed int)v22 + SHIDWORD(v22)) - 48;
    if ( v761 <= 0 || v761 > 9 )
      v454 = 0;
    if ( (v611 >> v761) & 1 )
      v454 = 0;
    v611 |= 1 << v761;
    v461 += v761;
    ++v911;
  }
  if ( v461 != 24 )
    v454 = 0;
  v462 = 0;
  v612 = 0;
  LODWORD(v23) = sub_110F4(&v1075, v1);
  v912 = v23;
  LODWORD(v24) = sub_1110E(&v1075);
  while ( v912 != v24 )
  {
    v25 = *v912;
    v1 = (unsigned int)*v912;
    *(&importmedieum[20 * (signed int)v25] + SHIDWORD(v25)) = *(_BYTE *)(a1 + 20LL * (signed int)v25 + SHIDWORD(v25));
    v762 = *(_BYTE *)(a1 + 20LL * (signed int)v25 + SHIDWORD(v25)) - 48;
    if ( v762 <= 0 || v762 > 9 )
      v454 = 0;
    if ( (v612 >> v762) & 1 )
      v454 = 0;
    v612 |= 1 << v762;
    v462 += v762;
    ++v912;
  }
  if ( v462 != 17 )
    v454 = 0;
  v463 = 0;
  v613 = 0;
  LODWORD(v26) = sub_110F4(&v1079, v1);
  v913 = v26;
  LODWORD(v27) = sub_1110E(&v1079);
  while ( v913 != v27 )
  {
    v28 = *v913;
    v1 = (unsigned int)*v913;
    *(&importmedieum[20 * (signed int)v28] + SHIDWORD(v28)) = *(_BYTE *)(a1 + 20LL * (signed int)v28 + SHIDWORD(v28));
    v763 = *(_BYTE *)(a1 + 20LL * (signed int)v28 + SHIDWORD(v28)) - 48;
    if ( v763 <= 0 || v763 > 9 )
      v454 = 0;
    if ( (v613 >> v763) & 1 )
      v454 = 0;
    v613 |= 1 << v763;
    v463 += v763;
    ++v913;
  }
  if ( v463 != 3 )
    v454 = 0;
  v464 = 0;
  v614 = 0;
  LODWORD(v29) = sub_110F4(&v1083, v1);
  v914 = v29;
  LODWORD(v30) = sub_1110E(&v1083);
  while ( v914 != v30 )
  {
    v31 = *v914;
    v1 = (unsigned int)*v914;
    *(&importmedieum[20 * (signed int)v31] + SHIDWORD(v31)) = *(_BYTE *)(a1 + 20LL * (signed int)v31 + SHIDWORD(v31));
    v764 = *(_BYTE *)(a1 + 20LL * (signed int)v31 + SHIDWORD(v31)) - 48;
    if ( v764 <= 0 || v764 > 9 )
      v454 = 0;
    if ( (v614 >> v764) & 1 )
      v454 = 0;
    v614 |= 1 << v764;
    v464 += v764;
    ++v914;
  }
  if ( v464 != 8 )
    v454 = 0;
  v465 = 0;
  v615 = 0;
  LODWORD(v32) = sub_11164(&v1759);
  v915 = v32;
  LODWORD(v33) = sub_1117E(&v1759);
  while ( v915 != v33 )
  {
    v34 = *v915;
    v1 = (unsigned int)*v915;
    *(&importmedieum[20 * (signed int)v34] + SHIDWORD(v34)) = *(_BYTE *)(a1 + 20LL * (signed int)v34 + SHIDWORD(v34));
    v765 = *(_BYTE *)(a1 + 20LL * (signed int)v34 + SHIDWORD(v34)) - 48;
    if ( v765 <= 0 || v765 > 9 )
      v454 = 0;
    if ( (v615 >> v765) & 1 )
      v454 = 0;
    v615 |= 1 << v765;
    v465 += v765;
    ++v915;
  }
  if ( v465 != 30 )
    v454 = 0;
  v466 = 0;
  v616 = 0;
  LODWORD(v35) = sub_1112C(&v1475);
  v916 = v35;
  LODWORD(v36) = sub_11146(&v1475);
  while ( v916 != v36 )
  {
    v37 = *v916;
    v1 = (unsigned int)*v916;
    *(&importmedieum[20 * (signed int)v37] + SHIDWORD(v37)) = *(_BYTE *)(a1 + 20LL * (signed int)v37 + SHIDWORD(v37));
    v766 = *(_BYTE *)(a1 + 20LL * (signed int)v37 + SHIDWORD(v37)) - 48;
    if ( v766 <= 0 || v766 > 9 )
      v454 = 0;
    if ( (v616 >> v766) & 1 )
      v454 = 0;
    v616 |= 1 << v766;
    v466 += v766;
    ++v916;
  }
  if ( v466 != 23 )
    v454 = 0;
  v467 = 0;
  v617 = 0;
  LODWORD(v38) = sub_1119C(&v1679);
  v917 = v38;
  LODWORD(v39) = sub_111B6(&v1679);
  while ( v917 != v39 )
  {
    v40 = *v917;
    v1 = (unsigned int)*v917;
    *(&importmedieum[20 * (signed int)v40] + SHIDWORD(v40)) = *(_BYTE *)(a1 + 20LL * (signed int)v40 + SHIDWORD(v40));
    v767 = *(_BYTE *)(a1 + 20LL * (signed int)v40 + SHIDWORD(v40)) - 48;
    if ( v767 <= 0 || v767 > 9 )
      v454 = 0;
    if ( (v617 >> v767) & 1 )
      v454 = 0;
    v617 |= 1 << v767;
    v467 += v767;
    ++v917;
  }
  if ( v467 != 26 )
    v454 = 0;
  v468 = 0;
  v618 = 0;
  LODWORD(v41) = sub_110F4(&v1087, v1);
  v918 = v41;
  LODWORD(v42) = sub_1110E(&v1087);
  while ( v918 != v42 )
  {
    v43 = *v918;
    v1 = (unsigned int)*v918;
    *(&importmedieum[20 * (signed int)v43] + SHIDWORD(v43)) = *(_BYTE *)(a1 + 20LL * (signed int)v43 + SHIDWORD(v43));
    v768 = *(_BYTE *)(a1 + 20LL * (signed int)v43 + SHIDWORD(v43)) - 48;
    if ( v768 <= 0 || v768 > 9 )
      v454 = 0;
    if ( (v618 >> v768) & 1 )
      v454 = 0;
    v618 |= 1 << v768;
    v468 += v768;
    ++v918;
  }
  if ( v468 != 3 )
    v454 = 0;
  v469 = 0;
  v619 = 0;
  LODWORD(v44) = sub_110F4(&v1091, v1);
  v919 = v44;
  LODWORD(v45) = sub_1110E(&v1091);
  while ( v919 != v45 )
  {
    v46 = *v919;
    v1 = (unsigned int)*v919;
    *(&importmedieum[20 * (signed int)v46] + SHIDWORD(v46)) = *(_BYTE *)(a1 + 20LL * (signed int)v46 + SHIDWORD(v46));
    v769 = *(_BYTE *)(a1 + 20LL * (signed int)v46 + SHIDWORD(v46)) - 48;
    if ( v769 <= 0 || v769 > 9 )
      v454 = 0;
    if ( (v619 >> v769) & 1 )
      v454 = 0;
    v619 |= 1 << v769;
    v469 += v769;
    ++v919;
  }
  if ( v469 != 9 )
    v454 = 0;
  v470 = 0;
  v620 = 0;
  LODWORD(v47) = sub_110F4(&v1095, v1);
  v920 = v47;
  LODWORD(v48) = sub_1110E(&v1095);
  while ( v920 != v48 )
  {
    v49 = *v920;
    v1 = (unsigned int)*v920;
    *(&importmedieum[20 * (signed int)v49] + SHIDWORD(v49)) = *(_BYTE *)(a1 + 20LL * (signed int)v49 + SHIDWORD(v49));
    v770 = *(_BYTE *)(a1 + 20LL * (signed int)v49 + SHIDWORD(v49)) - 48;
    if ( v770 <= 0 || v770 > 9 )
      v454 = 0;
    if ( (v620 >> v770) & 1 )
      v454 = 0;
    v620 |= 1 << v770;
    v470 += v770;
    ++v920;
  }
  if ( v470 != 17 )
    v454 = 0;
  v471 = 0;
  v621 = 0;
  LODWORD(v50) = sub_110F4(&v1099, v1);
  v921 = v50;
  LODWORD(v51) = sub_1110E(&v1099);
  while ( v921 != v51 )
  {
    v52 = *v921;
    v1 = (unsigned int)*v921;
    *(&importmedieum[20 * (signed int)v52] + SHIDWORD(v52)) = *(_BYTE *)(a1 + 20LL * (signed int)v52 + SHIDWORD(v52));
    v771 = *(_BYTE *)(a1 + 20LL * (signed int)v52 + SHIDWORD(v52)) - 48;
    if ( v771 <= 0 || v771 > 9 )
      v454 = 0;
    if ( (v621 >> v771) & 1 )
      v454 = 0;
    v621 |= 1 << v771;
    v471 += v771;
    ++v921;
  }
  if ( v471 != 11 )
    v454 = 0;
  v472 = 0;
  v622 = 0;
  LODWORD(v53) = sub_110F4(&v1103, v1);
  v922 = v53;
  LODWORD(v54) = sub_1110E(&v1103);
  while ( v922 != v54 )
  {
    v55 = *v922;
    v1 = (unsigned int)*v922;
    *(&importmedieum[20 * (signed int)v55] + SHIDWORD(v55)) = *(_BYTE *)(a1 + 20LL * (signed int)v55 + SHIDWORD(v55));
    v772 = *(_BYTE *)(a1 + 20LL * (signed int)v55 + SHIDWORD(v55)) - 48;
    if ( v772 <= 0 || v772 > 9 )
      v454 = 0;
    if ( (v622 >> v772) & 1 )
      v454 = 0;
    v622 |= 1 << v772;
    v472 += v772;
    ++v922;
  }
  if ( v472 != 4 )
    v454 = 0;
  v473 = 0;
  v623 = 0;
  LODWORD(v56) = sub_1112C(&v1481);
  v923 = v56;
  LODWORD(v57) = sub_11146(&v1481);
  while ( v923 != v57 )
  {
    v58 = *v923;
    v1 = (unsigned int)*v923;
    *(&importmedieum[20 * (signed int)v58] + SHIDWORD(v58)) = *(_BYTE *)(a1 + 20LL * (signed int)v58 + SHIDWORD(v58));
    v773 = *(_BYTE *)(a1 + 20LL * (signed int)v58 + SHIDWORD(v58)) - 48;
    if ( v773 <= 0 || v773 > 9 )
      v454 = 0;
    if ( (v623 >> v773) & 1 )
      v454 = 0;
    v623 |= 1 << v773;
    v473 += v773;
    ++v923;
  }
  if ( v473 != 6 )
    v454 = 0;
  v474 = 0;
  v624 = 0;
  LODWORD(v59) = sub_110F4(&v1107, v1);
  v924 = v59;
  LODWORD(v60) = sub_1110E(&v1107);
  while ( v924 != v60 )
  {
    v61 = *v924;
    v1 = (unsigned int)*v924;
    *(&importmedieum[20 * (signed int)v61] + SHIDWORD(v61)) = *(_BYTE *)(a1 + 20LL * (signed int)v61 + SHIDWORD(v61));
    v774 = *(_BYTE *)(a1 + 20LL * (signed int)v61 + SHIDWORD(v61)) - 48;
    if ( v774 <= 0 || v774 > 9 )
      v454 = 0;
    if ( (v624 >> v774) & 1 )
      v454 = 0;
    v624 |= 1 << v774;
    v474 += v774;
    ++v924;
  }
  if ( v474 != 9 )
    v454 = 0;
  v475 = 0;
  v625 = 0;
  LODWORD(v62) = sub_110F4(&v1111, v1);
  v925 = v62;
  LODWORD(v63) = sub_1110E(&v1111);
  while ( v925 != v63 )
  {
    v64 = *v925;
    v1 = (unsigned int)*v925;
    *(&importmedieum[20 * (signed int)v64] + SHIDWORD(v64)) = *(_BYTE *)(a1 + 20LL * (signed int)v64 + SHIDWORD(v64));
    v775 = *(_BYTE *)(a1 + 20LL * (signed int)v64 + SHIDWORD(v64)) - 48;
    if ( v775 <= 0 || v775 > 9 )
      v454 = 0;
    if ( (v625 >> v775) & 1 )
      v454 = 0;
    v625 |= 1 << v775;
    v475 += v775;
    ++v925;
  }
  if ( v475 != 3 )
    v454 = 0;
  v476 = 0;
  v626 = 0;
  LODWORD(v65) = sub_1112C(&v1487);
  v926 = v65;
  LODWORD(v66) = sub_11146(&v1487);
  while ( v926 != v66 )
  {
    v67 = *v926;
    v1 = (unsigned int)*v926;
    *(&importmedieum[20 * (signed int)v67] + SHIDWORD(v67)) = *(_BYTE *)(a1 + 20LL * (signed int)v67 + SHIDWORD(v67));
    v776 = *(_BYTE *)(a1 + 20LL * (signed int)v67 + SHIDWORD(v67)) - 48;
    if ( v776 <= 0 || v776 > 9 )
      v454 = 0;
    if ( (v626 >> v776) & 1 )
      v454 = 0;
    v626 |= 1 << v776;
    v476 += v776;
    ++v926;
  }
  if ( v476 != 6 )
    v454 = 0;
  v477 = 0;
  v627 = 0;
  LODWORD(v68) = sub_1112C(&v1493);
  v927 = v68;
  LODWORD(v69) = sub_11146(&v1493);
  while ( v927 != v69 )
  {
    v70 = *v927;
    v1 = (unsigned int)*v927;
    *(&importmedieum[20 * (signed int)v70] + SHIDWORD(v70)) = *(_BYTE *)(a1 + 20LL * (signed int)v70 + SHIDWORD(v70));
    v777 = *(_BYTE *)(a1 + 20LL * (signed int)v70 + SHIDWORD(v70)) - 48;
    if ( v777 <= 0 || v777 > 9 )
      v454 = 0;
    if ( (v627 >> v777) & 1 )
      v454 = 0;
    v627 |= 1 << v777;
    v477 += v777;
    ++v927;
  }
  if ( v477 != 7 )
    v454 = 0;
  v478 = 0;
  v628 = 0;
  LODWORD(v71) = sub_110F4(&v1115, v1);
  v928 = v71;
  LODWORD(v72) = sub_1110E(&v1115);
  while ( v928 != v72 )
  {
    v73 = *v928;
    v1 = (unsigned int)*v928;
    *(&importmedieum[20 * (signed int)v73] + SHIDWORD(v73)) = *(_BYTE *)(a1 + 20LL * (signed int)v73 + SHIDWORD(v73));
    v778 = *(_BYTE *)(a1 + 20LL * (signed int)v73 + SHIDWORD(v73)) - 48;
    if ( v778 <= 0 || v778 > 9 )
      v454 = 0;
    if ( (v628 >> v778) & 1 )
      v454 = 0;
    v628 |= 1 << v778;
    v478 += v778;
    ++v928;
  }
  if ( v478 != 4 )
    v454 = 0;
  v479 = 0;
  v629 = 0;
  LODWORD(v74) = sub_110F4(&v1119, v1);
  v929 = v74;
  LODWORD(v75) = sub_1110E(&v1119);
  while ( v929 != v75 )
  {
    v76 = *v929;
    v1 = (unsigned int)*v929;
    *(&importmedieum[20 * (signed int)v76] + SHIDWORD(v76)) = *(_BYTE *)(a1 + 20LL * (signed int)v76 + SHIDWORD(v76));
    v779 = *(_BYTE *)(a1 + 20LL * (signed int)v76 + SHIDWORD(v76)) - 48;
    if ( v779 <= 0 || v779 > 9 )
      v454 = 0;
    if ( (v629 >> v779) & 1 )
      v454 = 0;
    v629 |= 1 << v779;
    v479 += v779;
    ++v929;
  }
  if ( v479 != 16 )
    v454 = 0;
  v480 = 0;
  v630 = 0;
  LODWORD(v77) = sub_110F4(&v1123, v1);
  v930 = v77;
  LODWORD(v78) = sub_1110E(&v1123);
  while ( v930 != v78 )
  {
    v79 = *v930;
    v1 = (unsigned int)*v930;
    *(&importmedieum[20 * (signed int)v79] + SHIDWORD(v79)) = *(_BYTE *)(a1 + 20LL * (signed int)v79 + SHIDWORD(v79));
    v780 = *(_BYTE *)(a1 + 20LL * (signed int)v79 + SHIDWORD(v79)) - 48;
    if ( v780 <= 0 || v780 > 9 )
      v454 = 0;
    if ( (v630 >> v780) & 1 )
      v454 = 0;
    v630 |= 1 << v780;
    v480 += v780;
    ++v930;
  }
  if ( v480 != 4 )
    v454 = 0;
  v481 = 0;
  v631 = 0;
  LODWORD(v80) = sub_110F4(&v1127, v1);
  v931 = v80;
  LODWORD(v81) = sub_1110E(&v1127);
  while ( v931 != v81 )
  {
    v82 = *v931;
    v1 = (unsigned int)*v931;
    *(&importmedieum[20 * (signed int)v82] + SHIDWORD(v82)) = *(_BYTE *)(a1 + 20LL * (signed int)v82 + SHIDWORD(v82));
    v781 = *(_BYTE *)(a1 + 20LL * (signed int)v82 + SHIDWORD(v82)) - 48;
    if ( v781 <= 0 || v781 > 9 )
      v454 = 0;
    if ( (v631 >> v781) & 1 )
      v454 = 0;
    v631 |= 1 << v781;
    v481 += v781;
    ++v931;
  }
  if ( v481 != 3 )
    v454 = 0;
  v482 = 0;
  v632 = 0;
  LODWORD(v83) = sub_110F4(&v1131, v1);
  v932 = v83;
  LODWORD(v84) = sub_1110E(&v1131);
  while ( v932 != v84 )
  {
    v85 = *v932;
    v1 = (unsigned int)*v932;
    *(&importmedieum[20 * (signed int)v85] + SHIDWORD(v85)) = *(_BYTE *)(a1 + 20LL * (signed int)v85 + SHIDWORD(v85));
    v782 = *(_BYTE *)(a1 + 20LL * (signed int)v85 + SHIDWORD(v85)) - 48;
    if ( v782 <= 0 || v782 > 9 )
      v454 = 0;
    if ( (v632 >> v782) & 1 )
      v454 = 0;
    v632 |= 1 << v782;
    v482 += v782;
    ++v932;
  }
  if ( v482 != 16 )
    v454 = 0;
  v483 = 0;
  v633 = 0;
  LODWORD(v86) = sub_110F4(&v1135, v1);
  v933 = v86;
  LODWORD(v87) = sub_1110E(&v1135);
  while ( v933 != v87 )
  {
    v88 = *v933;
    v1 = (unsigned int)*v933;
    *(&importmedieum[20 * (signed int)v88] + SHIDWORD(v88)) = *(_BYTE *)(a1 + 20LL * (signed int)v88 + SHIDWORD(v88));
    v783 = *(_BYTE *)(a1 + 20LL * (signed int)v88 + SHIDWORD(v88)) - 48;
    if ( v783 <= 0 || v783 > 9 )
      v454 = 0;
    if ( (v633 >> v783) & 1 )
      v454 = 0;
    v633 |= 1 << v783;
    v483 += v783;
    ++v933;
  }
  if ( v483 != 3 )
    v454 = 0;
  v484 = 0;
  v634 = 0;
  LODWORD(v89) = sub_110F4(&v1139, v1);
  v934 = v89;
  LODWORD(v90) = sub_1110E(&v1139);
  while ( v934 != v90 )
  {
    v91 = *v934;
    v1 = (unsigned int)*v934;
    *(&importmedieum[20 * (signed int)v91] + SHIDWORD(v91)) = *(_BYTE *)(a1 + 20LL * (signed int)v91 + SHIDWORD(v91));
    v784 = *(_BYTE *)(a1 + 20LL * (signed int)v91 + SHIDWORD(v91)) - 48;
    if ( v784 <= 0 || v784 > 9 )
      v454 = 0;
    if ( (v634 >> v784) & 1 )
      v454 = 0;
    v634 |= 1 << v784;
    v484 += v784;
    ++v934;
  }
  if ( v484 != 10 )
    v454 = 0;
  v485 = 0;
  v635 = 0;
  LODWORD(v92) = sub_110F4(&v1143, v1);
  v935 = v92;
  LODWORD(v93) = sub_1110E(&v1143);
  while ( v935 != v93 )
  {
    v94 = *v935;
    v1 = (unsigned int)*v935;
    *(&importmedieum[20 * (signed int)v94] + SHIDWORD(v94)) = *(_BYTE *)(a1 + 20LL * (signed int)v94 + SHIDWORD(v94));
    v785 = *(_BYTE *)(a1 + 20LL * (signed int)v94 + SHIDWORD(v94)) - 48;
    if ( v785 <= 0 || v785 > 9 )
      v454 = 0;
    if ( (v635 >> v785) & 1 )
      v454 = 0;
    v635 |= 1 << v785;
    v485 += v785;
    ++v935;
  }
  if ( v485 != 3 )
    v454 = 0;
  v486 = 0;
  v636 = 0;
  LODWORD(v95) = sub_1119C(&v1689);
  v936 = v95;
  LODWORD(v96) = sub_111B6(&v1689);
  while ( v936 != v96 )
  {
    v97 = *v936;
    v1 = (unsigned int)*v936;
    *(&importmedieum[20 * (signed int)v97] + SHIDWORD(v97)) = *(_BYTE *)(a1 + 20LL * (signed int)v97 + SHIDWORD(v97));
    v786 = *(_BYTE *)(a1 + 20LL * (signed int)v97 + SHIDWORD(v97)) - 48;
    if ( v786 <= 0 || v786 > 9 )
      v454 = 0;
    if ( (v636 >> v786) & 1 )
      v454 = 0;
    v636 |= 1 << v786;
    v486 += v786;
    ++v936;
  }
  if ( v486 != 19 )
    v454 = 0;
  v487 = 0;
  v637 = 0;
  LODWORD(v98) = sub_110F4(&v1147, v1);
  v937 = v98;
  LODWORD(v99) = sub_1110E(&v1147);
  while ( v937 != v99 )
  {
    v100 = *v937;
    v1 = (unsigned int)*v937;
    *(&importmedieum[20 * (signed int)v100] + SHIDWORD(v100)) = *(_BYTE *)(a1 + 20LL * (signed int)v100 + SHIDWORD(v100));
    v787 = *(_BYTE *)(a1 + 20LL * (signed int)v100 + SHIDWORD(v100)) - 48;
    if ( v787 <= 0 || v787 > 9 )
      v454 = 0;
    if ( (v637 >> v787) & 1 )
      v454 = 0;
    v637 |= 1 << v787;
    v487 += v787;
    ++v937;
  }
  if ( v487 != 17 )
    v454 = 0;
  v488 = 0;
  v638 = 0;
  LODWORD(v101) = sub_11164(&v1771);
  v938 = v101;
  LODWORD(v102) = sub_1117E(&v1771);
  while ( v938 != v102 )
  {
    v103 = *v938;
    v1 = (unsigned int)*v938;
    *(&importmedieum[20 * (signed int)v103] + SHIDWORD(v103)) = *(_BYTE *)(a1 + 20LL * (signed int)v103 + SHIDWORD(v103));
    v788 = *(_BYTE *)(a1 + 20LL * (signed int)v103 + SHIDWORD(v103)) - 48;
    if ( v788 <= 0 || v788 > 9 )
      v454 = 0;
    if ( (v638 >> v788) & 1 )
      v454 = 0;
    v638 |= 1 << v788;
    v488 += v788;
    ++v938;
  }
  if ( v488 != 30 )
    v454 = 0;
  v489 = 0;
  v639 = 0;
  LODWORD(v104) = sub_110F4(&v1151, v1);
  v939 = v104;
  LODWORD(v105) = sub_1110E(&v1151);
  while ( v939 != v105 )
  {
    v106 = *v939;
    v1 = (unsigned int)*v939;
    *(&importmedieum[20 * (signed int)v106] + SHIDWORD(v106)) = *(_BYTE *)(a1 + 20LL * (signed int)v106 + SHIDWORD(v106));
    v789 = *(_BYTE *)(a1 + 20LL * (signed int)v106 + SHIDWORD(v106)) - 48;
    if ( v789 <= 0 || v789 > 9 )
      v454 = 0;
    if ( (v639 >> v789) & 1 )
      v454 = 0;
    v639 |= 1 << v789;
    v489 += v789;
    ++v939;
  }
  if ( v489 != 3 )
    v454 = 0;
  v490 = 0;
  v640 = 0;
  LODWORD(v107) = sub_110F4(&v1155, v1);
  v940 = v107;
  LODWORD(v108) = sub_1110E(&v1155);
  while ( v940 != v108 )
  {
    v109 = *v940;
    v1 = (unsigned int)*v940;
    *(&importmedieum[20 * (signed int)v109] + SHIDWORD(v109)) = *(_BYTE *)(a1 + 20LL * (signed int)v109 + SHIDWORD(v109));
    v790 = *(_BYTE *)(a1 + 20LL * (signed int)v109 + SHIDWORD(v109)) - 48;
    if ( v790 <= 0 || v790 > 9 )
      v454 = 0;
    if ( (v640 >> v790) & 1 )
      v454 = 0;
    v640 |= 1 << v790;
    v490 += v790;
    ++v940;
  }
  if ( v490 != 10 )
    v454 = 0;
  v491 = 0;
  v641 = 0;
  LODWORD(v110) = sub_1119C(&v1699);
  v941 = v110;
  LODWORD(v111) = sub_111B6(&v1699);
  while ( v941 != v111 )
  {
    v112 = *v941;
    v1 = (unsigned int)*v941;
    *(&importmedieum[20 * (signed int)v112] + SHIDWORD(v112)) = *(_BYTE *)(a1 + 20LL * (signed int)v112 + SHIDWORD(v112));
    v791 = *(_BYTE *)(a1 + 20LL * (signed int)v112 + SHIDWORD(v112)) - 48;
    if ( v791 <= 0 || v791 > 9 )
      v454 = 0;
    if ( (v641 >> v791) & 1 )
      v454 = 0;
    v641 |= 1 << v791;
    v491 += v791;
    ++v941;
  }
  if ( v491 != 16 )
    v454 = 0;
  v492 = 0;
  v642 = 0;
  LODWORD(v113) = sub_110F4(&v1159, v1);
  v942 = v113;
  LODWORD(v114) = sub_1110E(&v1159);
  while ( v942 != v114 )
  {
    v115 = *v942;
    v1 = (unsigned int)*v942;
    *(&importmedieum[20 * (signed int)v115] + SHIDWORD(v115)) = *(_BYTE *)(a1 + 20LL * (signed int)v115 + SHIDWORD(v115));
    v792 = *(_BYTE *)(a1 + 20LL * (signed int)v115 + SHIDWORD(v115)) - 48;
    if ( v792 <= 0 || v792 > 9 )
      v454 = 0;
    if ( (v642 >> v792) & 1 )
      v454 = 0;
    v642 |= 1 << v792;
    v492 += v792;
    ++v942;
  }
  if ( v492 != 4 )
    v454 = 0;
  v493 = 0;
  v643 = 0;
  LODWORD(v116) = sub_110F4(&v1163, v1);
  v943 = v116;
  LODWORD(v117) = sub_1110E(&v1163);
  while ( v943 != v117 )
  {
    v118 = *v943;
    v1 = (unsigned int)*v943;
    *(&importmedieum[20 * (signed int)v118] + SHIDWORD(v118)) = *(_BYTE *)(a1 + 20LL * (signed int)v118 + SHIDWORD(v118));
    v793 = *(_BYTE *)(a1 + 20LL * (signed int)v118 + SHIDWORD(v118)) - 48;
    if ( v793 <= 0 || v793 > 9 )
      v454 = 0;
    if ( (v643 >> v793) & 1 )
      v454 = 0;
    v643 |= 1 << v793;
    v493 += v793;
    ++v943;
  }
  if ( v493 != 17 )
    v454 = 0;
  v494 = 0;
  v644 = 0;
  LODWORD(v119) = sub_110F4(&v1167, v1);
  v944 = v119;
  LODWORD(v120) = sub_1110E(&v1167);
  while ( v944 != v120 )
  {
    v121 = *v944;
    v1 = (unsigned int)*v944;
    *(&importmedieum[20 * (signed int)v121] + SHIDWORD(v121)) = *(_BYTE *)(a1 + 20LL * (signed int)v121 + SHIDWORD(v121));
    v794 = *(_BYTE *)(a1 + 20LL * (signed int)v121 + SHIDWORD(v121)) - 48;
    if ( v794 <= 0 || v794 > 9 )
      v454 = 0;
    if ( (v644 >> v794) & 1 )
      v454 = 0;
    v644 |= 1 << v794;
    v494 += v794;
    ++v944;
  }
  if ( v494 != 4 )
    v454 = 0;
  v495 = 0;
  v645 = 0;
  LODWORD(v122) = sub_110F4(&v1171, v1);
  v945 = v122;
  LODWORD(v123) = sub_1110E(&v1171);
  while ( v945 != v123 )
  {
    v124 = *v945;
    v1 = (unsigned int)*v945;
    *(&importmedieum[20 * (signed int)v124] + SHIDWORD(v124)) = *(_BYTE *)(a1 + 20LL * (signed int)v124 + SHIDWORD(v124));
    v795 = *(_BYTE *)(a1 + 20LL * (signed int)v124 + SHIDWORD(v124)) - 48;
    if ( v795 <= 0 || v795 > 9 )
      v454 = 0;
    if ( (v645 >> v795) & 1 )
      v454 = 0;
    v645 |= 1 << v795;
    v495 += v795;
    ++v945;
  }
  if ( v495 != 5 )
    v454 = 0;
  v496 = 0;
  v646 = 0;
  LODWORD(v125) = sub_110F4(&v1175, v1);
  v946 = v125;
  LODWORD(v126) = sub_1110E(&v1175);
  while ( v946 != v126 )
  {
    v127 = *v946;
    v1 = (unsigned int)*v946;
    *(&importmedieum[20 * (signed int)v127] + SHIDWORD(v127)) = *(_BYTE *)(a1 + 20LL * (signed int)v127 + SHIDWORD(v127));
    v796 = *(_BYTE *)(a1 + 20LL * (signed int)v127 + SHIDWORD(v127)) - 48;
    if ( v796 <= 0 || v796 > 9 )
      v454 = 0;
    if ( (v646 >> v796) & 1 )
      v454 = 0;
    v646 |= 1 << v796;
    v496 += v796;
    ++v946;
  }
  if ( v496 != 17 )
    v454 = 0;
  v497 = 0;
  v647 = 0;
  LODWORD(v128) = sub_111D4(&v1583);
  v947 = v128;
  LODWORD(v129) = sub_111EE(&v1583);
  while ( v947 != v129 )
  {
    v130 = *v947;
    v1 = (unsigned int)*v947;
    *(&importmedieum[20 * (signed int)v130] + SHIDWORD(v130)) = *(_BYTE *)(a1 + 20LL * (signed int)v130 + SHIDWORD(v130));
    v797 = *(_BYTE *)(a1 + 20LL * (signed int)v130 + SHIDWORD(v130)) - 48;
    if ( v797 <= 0 || v797 > 9 )
      v454 = 0;
    if ( (v647 >> v797) & 1 )
      v454 = 0;
    v647 |= 1 << v797;
    v497 += v797;
    ++v947;
  }
  if ( v497 != 10 )
    v454 = 0;
  v498 = 0;
  v648 = 0;
  LODWORD(v131) = sub_110F4(&v1179, v1);
  v948 = v131;
  LODWORD(v132) = sub_1110E(&v1179);
  while ( v948 != v132 )
  {
    v133 = *v948;
    v1 = (unsigned int)*v948;
    *(&importmedieum[20 * (signed int)v133] + SHIDWORD(v133)) = *(_BYTE *)(a1 + 20LL * (signed int)v133 + SHIDWORD(v133));
    v798 = *(_BYTE *)(a1 + 20LL * (signed int)v133 + SHIDWORD(v133)) - 48;
    if ( v798 <= 0 || v798 > 9 )
      v454 = 0;
    if ( (v648 >> v798) & 1 )
      v454 = 0;
    v648 |= 1 << v798;
    v498 += v798;
    ++v948;
  }
  if ( v498 != 10 )
    v454 = 0;
  v499 = 0;
  v649 = 0;
  LODWORD(v134) = sub_1119C(&v1709);
  v949 = v134;
  LODWORD(v135) = sub_111B6(&v1709);
  while ( v949 != v135 )
  {
    v136 = *v949;
    v1 = (unsigned int)*v949;
    *(&importmedieum[20 * (signed int)v136] + SHIDWORD(v136)) = *(_BYTE *)(a1 + 20LL * (signed int)v136 + SHIDWORD(v136));
    v799 = *(_BYTE *)(a1 + 20LL * (signed int)v136 + SHIDWORD(v136)) - 48;
    if ( v799 <= 0 || v799 > 9 )
      v454 = 0;
    if ( (v649 >> v799) & 1 )
      v454 = 0;
    v649 |= 1 << v799;
    v499 += v799;
    ++v949;
  }
  if ( v499 != 35 )
    v454 = 0;
  v500 = 0;
  v650 = 0;
  LODWORD(v137) = sub_1112C(&v1499);
  v950 = v137;
  LODWORD(v138) = sub_11146(&v1499);
  while ( v950 != v138 )
  {
    v139 = *v950;
    v1 = (unsigned int)*v950;
    *(&importmedieum[20 * (signed int)v139] + SHIDWORD(v139)) = *(_BYTE *)(a1 + 20LL * (signed int)v139 + SHIDWORD(v139));
    v800 = *(_BYTE *)(a1 + 20LL * (signed int)v139 + SHIDWORD(v139)) - 48;
    if ( v800 <= 0 || v800 > 9 )
      v454 = 0;
    if ( (v650 >> v800) & 1 )
      v454 = 0;
    v650 |= 1 << v800;
    v500 += v800;
    ++v950;
  }
  if ( v500 != 17 )
    v454 = 0;
  v501 = 0;
  v651 = 0;
  LODWORD(v140) = sub_1112C(&v1505);
  v951 = v140;
  LODWORD(v141) = sub_11146(&v1505);
  while ( v951 != v141 )
  {
    v142 = *v951;
    v1 = (unsigned int)*v951;
    *(&importmedieum[20 * (signed int)v142] + SHIDWORD(v142)) = *(_BYTE *)(a1 + 20LL * (signed int)v142 + SHIDWORD(v142));
    v801 = *(_BYTE *)(a1 + 20LL * (signed int)v142 + SHIDWORD(v142)) - 48;
    if ( v801 <= 0 || v801 > 9 )
      v454 = 0;
    if ( (v651 >> v801) & 1 )
      v454 = 0;
    v651 |= 1 << v801;
    v501 += v801;
    ++v951;
  }
  if ( v501 != 24 )
    v454 = 0;
  v502 = 0;
  v652 = 0;
  LODWORD(v143) = sub_111D4(&v1591);
  v952 = v143;
  LODWORD(v144) = sub_111EE(&v1591);
  while ( v952 != v144 )
  {
    v145 = *v952;
    v1 = (unsigned int)*v952;
    *(&importmedieum[20 * (signed int)v145] + SHIDWORD(v145)) = *(_BYTE *)(a1 + 20LL * (signed int)v145 + SHIDWORD(v145));
    v802 = *(_BYTE *)(a1 + 20LL * (signed int)v145 + SHIDWORD(v145)) - 48;
    if ( v802 <= 0 || v802 > 9 )
      v454 = 0;
    if ( (v652 >> v802) & 1 )
      v454 = 0;
    v652 |= 1 << v802;
    v502 += v802;
    ++v952;
  }
  if ( v502 != 21 )
    v454 = 0;
  v503 = 0;
  v653 = 0;
  LODWORD(v146) = sub_110F4(&v1183, v1);
  v953 = v146;
  LODWORD(v147) = sub_1110E(&v1183);
  while ( v953 != v147 )
  {
    v148 = *v953;
    v1 = (unsigned int)*v953;
    *(&importmedieum[20 * (signed int)v148] + SHIDWORD(v148)) = *(_BYTE *)(a1 + 20LL * (signed int)v148 + SHIDWORD(v148));
    v803 = *(_BYTE *)(a1 + 20LL * (signed int)v148 + SHIDWORD(v148)) - 48;
    if ( v803 <= 0 || v803 > 9 )
      v454 = 0;
    if ( (v653 >> v803) & 1 )
      v454 = 0;
    v653 |= 1 << v803;
    v503 += v803;
    ++v953;
  }
  if ( v503 != 17 )
    v454 = 0;
  v504 = 0;
  v654 = 0;
  LODWORD(v149) = sub_110F4(&v1187, v1);
  v954 = v149;
  LODWORD(v150) = sub_1110E(&v1187);
  while ( v954 != v150 )
  {
    v151 = *v954;
    v1 = (unsigned int)*v954;
    *(&importmedieum[20 * (signed int)v151] + SHIDWORD(v151)) = *(_BYTE *)(a1 + 20LL * (signed int)v151 + SHIDWORD(v151));
    v804 = *(_BYTE *)(a1 + 20LL * (signed int)v151 + SHIDWORD(v151)) - 48;
    if ( v804 <= 0 || v804 > 9 )
      v454 = 0;
    if ( (v654 >> v804) & 1 )
      v454 = 0;
    v654 |= 1 << v804;
    v504 += v804;
    ++v954;
  }
  if ( v504 != 8 )
    v454 = 0;
  v505 = 0;
  v655 = 0;
  LODWORD(v152) = sub_111D4(&v1599);
  v955 = v152;
  LODWORD(v153) = sub_111EE(&v1599);
  while ( v955 != v153 )
  {
    v154 = *v955;
    v1 = (unsigned int)*v955;
    *(&importmedieum[20 * (signed int)v154] + SHIDWORD(v154)) = *(_BYTE *)(a1 + 20LL * (signed int)v154 + SHIDWORD(v154));
    v805 = *(_BYTE *)(a1 + 20LL * (signed int)v154 + SHIDWORD(v154)) - 48;
    if ( v805 <= 0 || v805 > 9 )
      v454 = 0;
    if ( (v655 >> v805) & 1 )
      v454 = 0;
    v655 |= 1 << v805;
    v505 += v805;
    ++v955;
  }
  if ( v505 != 27 )
    v454 = 0;
  v506 = 0;
  v656 = 0;
  LODWORD(v155) = sub_1119C(&v1719);
  v956 = v155;
  LODWORD(v156) = sub_111B6(&v1719);
  while ( v956 != v156 )
  {
    v157 = *v956;
    v1 = (unsigned int)*v956;
    *(&importmedieum[20 * (signed int)v157] + SHIDWORD(v157)) = *(_BYTE *)(a1 + 20LL * (signed int)v157 + SHIDWORD(v157));
    v806 = *(_BYTE *)(a1 + 20LL * (signed int)v157 + SHIDWORD(v157)) - 48;
    if ( v806 <= 0 || v806 > 9 )
      v454 = 0;
    if ( (v656 >> v806) & 1 )
      v454 = 0;
    v656 |= 1 << v806;
    v506 += v806;
    ++v956;
  }
  if ( v506 != 16 )
    v454 = 0;
  v507 = 0;
  v657 = 0;
  LODWORD(v158) = sub_1112C(&v1511);
  v957 = v158;
  LODWORD(v159) = sub_11146(&v1511);
  while ( v957 != v159 )
  {
    v160 = *v957;
    v1 = (unsigned int)*v957;
    *(&importmedieum[20 * (signed int)v160] + SHIDWORD(v160)) = *(_BYTE *)(a1 + 20LL * (signed int)v160 + SHIDWORD(v160));
    v807 = *(_BYTE *)(a1 + 20LL * (signed int)v160 + SHIDWORD(v160)) - 48;
    if ( v807 <= 0 || v807 > 9 )
      v454 = 0;
    if ( (v657 >> v807) & 1 )
      v454 = 0;
    v657 |= 1 << v807;
    v507 += v807;
    ++v957;
  }
  if ( v507 != 18 )
    v454 = 0;
  v508 = 0;
  v658 = 0;
  LODWORD(v161) = sub_1112C(&v1517);
  v958 = v161;
  LODWORD(v162) = sub_11146(&v1517);
  while ( v958 != v162 )
  {
    v163 = *v958;
    v1 = (unsigned int)*v958;
    *(&importmedieum[20 * (signed int)v163] + SHIDWORD(v163)) = *(_BYTE *)(a1 + 20LL * (signed int)v163 + SHIDWORD(v163));
    v808 = *(_BYTE *)(a1 + 20LL * (signed int)v163 + SHIDWORD(v163)) - 48;
    if ( v808 <= 0 || v808 > 9 )
      v454 = 0;
    if ( (v658 >> v808) & 1 )
      v454 = 0;
    v658 |= 1 << v808;
    v508 += v808;
    ++v958;
  }
  if ( v508 != 15 )
    v454 = 0;
  v509 = 0;
  v659 = 0;
  LODWORD(v164) = sub_111D4(&v1607);
  v959 = v164;
  LODWORD(v165) = sub_111EE(&v1607);
  while ( v959 != v165 )
  {
    v166 = *v959;
    v1 = (unsigned int)*v959;
    *(&importmedieum[20 * (signed int)v166] + SHIDWORD(v166)) = *(_BYTE *)(a1 + 20LL * (signed int)v166 + SHIDWORD(v166));
    v809 = *(_BYTE *)(a1 + 20LL * (signed int)v166 + SHIDWORD(v166)) - 48;
    if ( v809 <= 0 || v809 > 9 )
      v454 = 0;
    if ( (v659 >> v809) & 1 )
      v454 = 0;
    v659 |= 1 << v809;
    v509 += v809;
    ++v959;
  }
  if ( v509 != 30 )
    v454 = 0;
  v510 = 0;
  v660 = 0;
  LODWORD(v167) = sub_1119C(&v1729);
  v960 = v167;
  LODWORD(v168) = sub_111B6(&v1729);
  while ( v960 != v168 )
  {
    v169 = *v960;
    v1 = (unsigned int)*v960;
    *(&importmedieum[20 * (signed int)v169] + SHIDWORD(v169)) = *(_BYTE *)(a1 + 20LL * (signed int)v169 + SHIDWORD(v169));
    v810 = *(_BYTE *)(a1 + 20LL * (signed int)v169 + SHIDWORD(v169)) - 48;
    if ( v810 <= 0 || v810 > 9 )
      v454 = 0;
    if ( (v660 >> v810) & 1 )
      v454 = 0;
    v660 |= 1 << v810;
    v510 += v810;
    ++v960;
  }
  if ( v510 != 16 )
    v454 = 0;
  v511 = 0;
  v661 = 0;
  LODWORD(v170) = sub_1112C(&v1523);
  v961 = v170;
  LODWORD(v171) = sub_11146(&v1523);
  while ( v961 != v171 )
  {
    v172 = *v961;
    v1 = (unsigned int)*v961;
    *(&importmedieum[20 * (signed int)v172] + SHIDWORD(v172)) = *(_BYTE *)(a1 + 20LL * (signed int)v172 + SHIDWORD(v172));
    v811 = *(_BYTE *)(a1 + 20LL * (signed int)v172 + SHIDWORD(v172)) - 48;
    if ( v811 <= 0 || v811 > 9 )
      v454 = 0;
    if ( (v661 >> v811) & 1 )
      v454 = 0;
    v661 |= 1 << v811;
    v511 += v811;
    ++v961;
  }
  if ( v511 != 6 )
    v454 = 0;
  v512 = 0;
  v662 = 0;
  LODWORD(v173) = sub_111D4(&v1615);
  v962 = v173;
  LODWORD(v174) = sub_111EE(&v1615);
  while ( v962 != v174 )
  {
    v175 = *v962;
    v1 = (unsigned int)*v962;
    *(&importmedieum[20 * (signed int)v175] + SHIDWORD(v175)) = *(_BYTE *)(a1 + 20LL * (signed int)v175 + SHIDWORD(v175));
    v812 = *(_BYTE *)(a1 + 20LL * (signed int)v175 + SHIDWORD(v175)) - 48;
    if ( v812 <= 0 || v812 > 9 )
      v454 = 0;
    if ( (v662 >> v812) & 1 )
      v454 = 0;
    v662 |= 1 << v812;
    v512 += v812;
    ++v962;
  }
  if ( v512 != 17 )
    v454 = 0;
  v513 = 0;
  v663 = 0;
  LODWORD(v176) = sub_111D4(&v1623);
  v963 = v176;
  LODWORD(v177) = sub_111EE(&v1623);
  while ( v963 != v177 )
  {
    v178 = *v963;
    v1 = (unsigned int)*v963;
    *(&importmedieum[20 * (signed int)v178] + SHIDWORD(v178)) = *(_BYTE *)(a1 + 20LL * (signed int)v178 + SHIDWORD(v178));
    v813 = *(_BYTE *)(a1 + 20LL * (signed int)v178 + SHIDWORD(v178)) - 48;
    if ( v813 <= 0 || v813 > 9 )
      v454 = 0;
    if ( (v663 >> v813) & 1 )
      v454 = 0;
    v663 |= 1 << v813;
    v513 += v813;
    ++v963;
  }
  if ( v513 != 17 )
    v454 = 0;
  v514 = 0;
  v664 = 0;
  LODWORD(v179) = sub_110F4(&v1191, v1);
  v964 = v179;
  LODWORD(v180) = sub_1110E(&v1191);
  while ( v964 != v180 )
  {
    v181 = *v964;
    v1 = (unsigned int)*v964;
    *(&importmedieum[20 * (signed int)v181] + SHIDWORD(v181)) = *(_BYTE *)(a1 + 20LL * (signed int)v181 + SHIDWORD(v181));
    v814 = *(_BYTE *)(a1 + 20LL * (signed int)v181 + SHIDWORD(v181)) - 48;
    if ( v814 <= 0 || v814 > 9 )
      v454 = 0;
    if ( (v664 >> v814) & 1 )
      v454 = 0;
    v664 |= 1 << v814;
    v514 += v814;
    ++v964;
  }
  if ( v514 != 17 )
    v454 = 0;
  v515 = 0;
  v665 = 0;
  LODWORD(v182) = sub_1112C(&v1529);
  v965 = v182;
  LODWORD(v183) = sub_11146(&v1529);
  while ( v965 != v183 )
  {
    v184 = *v965;
    v1 = (unsigned int)*v965;
    *(&importmedieum[20 * (signed int)v184] + SHIDWORD(v184)) = *(_BYTE *)(a1 + 20LL * (signed int)v184 + SHIDWORD(v184));
    v815 = *(_BYTE *)(a1 + 20LL * (signed int)v184 + SHIDWORD(v184)) - 48;
    if ( v815 <= 0 || v815 > 9 )
      v454 = 0;
    if ( (v665 >> v815) & 1 )
      v454 = 0;
    v665 |= 1 << v815;
    v515 += v815;
    ++v965;
  }
  if ( v515 != 21 )
    v454 = 0;
  v516 = 0;
  v666 = 0;
  LODWORD(v185) = sub_1112C(&v1535);
  v966 = v185;
  LODWORD(v186) = sub_11146(&v1535);
  while ( v966 != v186 )
  {
    v187 = *v966;
    v1 = (unsigned int)*v966;
    *(&importmedieum[20 * (signed int)v187] + SHIDWORD(v187)) = *(_BYTE *)(a1 + 20LL * (signed int)v187 + SHIDWORD(v187));
    v816 = *(_BYTE *)(a1 + 20LL * (signed int)v187 + SHIDWORD(v187)) - 48;
    if ( v816 <= 0 || v816 > 9 )
      v454 = 0;
    if ( (v666 >> v816) & 1 )
      v454 = 0;
    v666 |= 1 << v816;
    v516 += v816;
    ++v966;
  }
  if ( v516 != 13 )
    v454 = 0;
  v517 = 0;
  v667 = 0;
  LODWORD(v188) = sub_110F4(&v1195, v1);
  v967 = v188;
  LODWORD(v189) = sub_1110E(&v1195);
  while ( v967 != v189 )
  {
    v190 = *v967;
    v1 = (unsigned int)*v967;
    *(&importmedieum[20 * (signed int)v190] + SHIDWORD(v190)) = *(_BYTE *)(a1 + 20LL * (signed int)v190 + SHIDWORD(v190));
    v817 = *(_BYTE *)(a1 + 20LL * (signed int)v190 + SHIDWORD(v190)) - 48;
    if ( v817 <= 0 || v817 > 9 )
      v454 = 0;
    if ( (v667 >> v817) & 1 )
      v454 = 0;
    v667 |= 1 << v817;
    v517 += v817;
    ++v967;
  }
  if ( v517 != 3 )
    v454 = 0;
  v518 = 0;
  v668 = 0;
  LODWORD(v191) = sub_110F4(&v1199, v1);
  v968 = v191;
  LODWORD(v192) = sub_1110E(&v1199);
  while ( v968 != v192 )
  {
    v193 = *v968;
    v1 = (unsigned int)*v968;
    *(&importmedieum[20 * (signed int)v193] + SHIDWORD(v193)) = *(_BYTE *)(a1 + 20LL * (signed int)v193 + SHIDWORD(v193));
    v818 = *(_BYTE *)(a1 + 20LL * (signed int)v193 + SHIDWORD(v193)) - 48;
    if ( v818 <= 0 || v818 > 9 )
      v454 = 0;
    if ( (v668 >> v818) & 1 )
      v454 = 0;
    v668 |= 1 << v818;
    v518 += v818;
    ++v968;
  }
  if ( v518 != 16 )
    v454 = 0;
  v519 = 0;
  v669 = 0;
  LODWORD(v194) = sub_111D4(&v1631);
  v969 = v194;
  LODWORD(v195) = sub_111EE(&v1631);
  while ( v969 != v195 )
  {
    v196 = *v969;
    v1 = (unsigned int)*v969;
    *(&importmedieum[20 * (signed int)v196] + SHIDWORD(v196)) = *(_BYTE *)(a1 + 20LL * (signed int)v196 + SHIDWORD(v196));
    v819 = *(_BYTE *)(a1 + 20LL * (signed int)v196 + SHIDWORD(v196)) - 48;
    if ( v819 <= 0 || v819 > 9 )
      v454 = 0;
    if ( (v669 >> v819) & 1 )
      v454 = 0;
    v669 |= 1 << v819;
    v519 += v819;
    ++v969;
  }
  if ( v519 != 21 )
    v454 = 0;
  v520 = 0;
  v670 = 0;
  LODWORD(v197) = sub_110F4(&v1203, v1);
  v970 = v197;
  LODWORD(v198) = sub_1110E(&v1203);
  while ( v970 != v198 )
  {
    v199 = *v970;
    v1 = (unsigned int)*v970;
    *(&importmedieum[20 * (signed int)v199] + SHIDWORD(v199)) = *(_BYTE *)(a1 + 20LL * (signed int)v199 + SHIDWORD(v199));
    v820 = *(_BYTE *)(a1 + 20LL * (signed int)v199 + SHIDWORD(v199)) - 48;
    if ( v820 <= 0 || v820 > 9 )
      v454 = 0;
    if ( (v670 >> v820) & 1 )
      v454 = 0;
    v670 |= 1 << v820;
    v520 += v820;
    ++v970;
  }
  if ( v520 != 3 )
    v454 = 0;
  v521 = 0;
  v671 = 0;
  LODWORD(v200) = sub_110F4(&v1207, v1);
  v971 = v200;
  LODWORD(v201) = sub_1110E(&v1207);
  while ( v971 != v201 )
  {
    v202 = *v971;
    v1 = (unsigned int)*v971;
    *(&importmedieum[20 * (signed int)v202] + SHIDWORD(v202)) = *(_BYTE *)(a1 + 20LL * (signed int)v202 + SHIDWORD(v202));
    v821 = *(_BYTE *)(a1 + 20LL * (signed int)v202 + SHIDWORD(v202)) - 48;
    if ( v821 <= 0 || v821 > 9 )
      v454 = 0;
    if ( (v671 >> v821) & 1 )
      v454 = 0;
    v671 |= 1 << v821;
    v521 += v821;
    ++v971;
  }
  if ( v521 != 8 )
    v454 = 0;
  v522 = 0;
  v672 = 0;
  LODWORD(v203) = sub_110F4(&v1211, v1);
  v972 = v203;
  LODWORD(v204) = sub_1110E(&v1211);
  while ( v972 != v204 )
  {
    v205 = *v972;
    v1 = (unsigned int)*v972;
    *(&importmedieum[20 * (signed int)v205] + SHIDWORD(v205)) = *(_BYTE *)(a1 + 20LL * (signed int)v205 + SHIDWORD(v205));
    v822 = *(_BYTE *)(a1 + 20LL * (signed int)v205 + SHIDWORD(v205)) - 48;
    if ( v822 <= 0 || v822 > 9 )
      v454 = 0;
    if ( (v672 >> v822) & 1 )
      v454 = 0;
    v672 |= 1 << v822;
    v522 += v822;
    ++v972;
  }
  if ( v522 != 16 )
    v454 = 0;
  v523 = 0;
  v673 = 0;
  LODWORD(v206) = sub_111D4(&v1639);
  v973 = v206;
  LODWORD(v207) = sub_111EE(&v1639);
  while ( v973 != v207 )
  {
    v208 = *v973;
    v1 = (unsigned int)*v973;
    *(&importmedieum[20 * (signed int)v208] + SHIDWORD(v208)) = *(_BYTE *)(a1 + 20LL * (signed int)v208 + SHIDWORD(v208));
    v823 = *(_BYTE *)(a1 + 20LL * (signed int)v208 + SHIDWORD(v208)) - 48;
    if ( v823 <= 0 || v823 > 9 )
      v454 = 0;
    if ( (v673 >> v823) & 1 )
      v454 = 0;
    v673 |= 1 << v823;
    v523 += v823;
    ++v973;
  }
  if ( v523 != 18 )
    v454 = 0;
  v524 = 0;
  v674 = 0;
  LODWORD(v209) = sub_1112C(&v1541);
  v974 = v209;
  LODWORD(v210) = sub_11146(&v1541);
  while ( v974 != v210 )
  {
    v211 = *v974;
    v1 = (unsigned int)*v974;
    *(&importmedieum[20 * (signed int)v211] + SHIDWORD(v211)) = *(_BYTE *)(a1 + 20LL * (signed int)v211 + SHIDWORD(v211));
    v824 = *(_BYTE *)(a1 + 20LL * (signed int)v211 + SHIDWORD(v211)) - 48;
    if ( v824 <= 0 || v824 > 9 )
      v454 = 0;
    if ( (v674 >> v824) & 1 )
      v454 = 0;
    v674 |= 1 << v824;
    v524 += v824;
    ++v974;
  }
  if ( v524 != 10 )
    v454 = 0;
  v525 = 0;
  v675 = 0;
  LODWORD(v212) = sub_110F4(&v1215, v1);
  v975 = v212;
  LODWORD(v213) = sub_1110E(&v1215);
  while ( v975 != v213 )
  {
    v214 = *v975;
    v1 = (unsigned int)*v975;
    *(&importmedieum[20 * (signed int)v214] + SHIDWORD(v214)) = *(_BYTE *)(a1 + 20LL * (signed int)v214 + SHIDWORD(v214));
    v825 = *(_BYTE *)(a1 + 20LL * (signed int)v214 + SHIDWORD(v214)) - 48;
    if ( v825 <= 0 || v825 > 9 )
      v454 = 0;
    if ( (v675 >> v825) & 1 )
      v454 = 0;
    v675 |= 1 << v825;
    v525 += v825;
    ++v975;
  }
  if ( v525 != 11 )
    v454 = 0;
  v526 = 0;
  v676 = 0;
  LODWORD(v215) = sub_110F4(&v1219, v1);
  v976 = v215;
  LODWORD(v216) = sub_1110E(&v1219);
  while ( v976 != v216 )
  {
    v217 = *v976;
    v1 = (unsigned int)*v976;
    *(&importmedieum[20 * (signed int)v217] + SHIDWORD(v217)) = *(_BYTE *)(a1 + 20LL * (signed int)v217 + SHIDWORD(v217));
    v826 = *(_BYTE *)(a1 + 20LL * (signed int)v217 + SHIDWORD(v217)) - 48;
    if ( v826 <= 0 || v826 > 9 )
      v454 = 0;
    if ( (v676 >> v826) & 1 )
      v454 = 0;
    v676 |= 1 << v826;
    v526 += v826;
    ++v976;
  }
  if ( v526 != 10 )
    v454 = 0;
  v527 = 0;
  v677 = 0;
  LODWORD(v218) = sub_110F4(&v1223, v1);
  v977 = v218;
  LODWORD(v219) = sub_1110E(&v1223);
  while ( v977 != v219 )
  {
    v220 = *v977;
    v1 = (unsigned int)*v977;
    *(&importmedieum[20 * (signed int)v220] + SHIDWORD(v220)) = *(_BYTE *)(a1 + 20LL * (signed int)v220 + SHIDWORD(v220));
    v827 = *(_BYTE *)(a1 + 20LL * (signed int)v220 + SHIDWORD(v220)) - 48;
    if ( v827 <= 0 || v827 > 9 )
      v454 = 0;
    if ( (v677 >> v827) & 1 )
      v454 = 0;
    v677 |= 1 << v827;
    v527 += v827;
    ++v977;
  }
  if ( v527 != 9 )
    v454 = 0;
  v528 = 0;
  v678 = 0;
  LODWORD(v221) = sub_111D4(&v1647);
  v978 = v221;
  LODWORD(v222) = sub_111EE(&v1647);
  while ( v978 != v222 )
  {
    v223 = *v978;
    v1 = (unsigned int)*v978;
    *(&importmedieum[20 * (signed int)v223] + SHIDWORD(v223)) = *(_BYTE *)(a1 + 20LL * (signed int)v223 + SHIDWORD(v223));
    v828 = *(_BYTE *)(a1 + 20LL * (signed int)v223 + SHIDWORD(v223)) - 48;
    if ( v828 <= 0 || v828 > 9 )
      v454 = 0;
    if ( (v678 >> v828) & 1 )
      v454 = 0;
    v678 |= 1 << v828;
    v528 += v828;
    ++v978;
  }
  if ( v528 != 10 )
    v454 = 0;
  v529 = 0;
  v679 = 0;
  LODWORD(v224) = sub_110F4(&v1227, v1);
  v979 = v224;
  LODWORD(v225) = sub_1110E(&v1227);
  while ( v979 != v225 )
  {
    v226 = *v979;
    v1 = (unsigned int)*v979;
    *(&importmedieum[20 * (signed int)v226] + SHIDWORD(v226)) = *(_BYTE *)(a1 + 20LL * (signed int)v226 + SHIDWORD(v226));
    v829 = *(_BYTE *)(a1 + 20LL * (signed int)v226 + SHIDWORD(v226)) - 48;
    if ( v829 <= 0 || v829 > 9 )
      v454 = 0;
    if ( (v679 >> v829) & 1 )
      v454 = 0;
    v679 |= 1 << v829;
    v529 += v829;
    ++v979;
  }
  if ( v529 != 13 )
    v454 = 0;
  v530 = 0;
  v680 = 0;
  LODWORD(v227) = sub_1120C(&v1783);
  v980 = v227;
  LODWORD(v228) = sub_11226(&v1783);
  while ( v980 != v228 )
  {
    v229 = *v980;
    v1 = (unsigned int)*v980;
    *(&importmedieum[20 * (signed int)v229] + SHIDWORD(v229)) = *(_BYTE *)(a1 + 20LL * (signed int)v229 + SHIDWORD(v229));
    v830 = *(_BYTE *)(a1 + 20LL * (signed int)v229 + SHIDWORD(v229)) - 48;
    if ( v830 <= 0 || v830 > 9 )
      v454 = 0;
    if ( (v680 >> v830) & 1 )
      v454 = 0;
    v680 |= 1 << v830;
    v530 += v830;
    ++v980;
  }
  if ( v530 != 44 )
    v454 = 0;
  v531 = 0;
  v681 = 0;
  LODWORD(v230) = sub_1120C(&v1799);
  v981 = v230;
  LODWORD(v231) = sub_11226(&v1799);
  while ( v981 != v231 )
  {
    v232 = *v981;
    v1 = (unsigned int)*v981;
    *(&importmedieum[20 * (signed int)v232] + SHIDWORD(v232)) = *(_BYTE *)(a1 + 20LL * (signed int)v232 + SHIDWORD(v232));
    v831 = *(_BYTE *)(a1 + 20LL * (signed int)v232 + SHIDWORD(v232)) - 48;
    if ( v831 <= 0 || v831 > 9 )
      v454 = 0;
    if ( (v681 >> v831) & 1 )
      v454 = 0;
    v681 |= 1 << v831;
    v531 += v831;
    ++v981;
  }
  if ( v531 != 44 )
    v454 = 0;
  v532 = 0;
  v682 = 0;
  LODWORD(v233) = sub_110F4(&v1231, v1);
  v982 = v233;
  LODWORD(v234) = sub_1110E(&v1231);
  while ( v982 != v234 )
  {
    v235 = *v982;
    v1 = (unsigned int)*v982;
    *(&importmedieum[20 * (signed int)v235] + SHIDWORD(v235)) = *(_BYTE *)(a1 + 20LL * (signed int)v235 + SHIDWORD(v235));
    v832 = *(_BYTE *)(a1 + 20LL * (signed int)v235 + SHIDWORD(v235)) - 48;
    if ( v832 <= 0 || v832 > 9 )
      v454 = 0;
    if ( (v682 >> v832) & 1 )
      v454 = 0;
    v682 |= 1 << v832;
    v532 += v832;
    ++v982;
  }
  if ( v532 != 5 )
    v454 = 0;
  v533 = 0;
  v683 = 0;
  LODWORD(v236) = sub_110F4(&v1235, v1);
  v983 = v236;
  LODWORD(v237) = sub_1110E(&v1235);
  while ( v983 != v237 )
  {
    v238 = *v983;
    v1 = (unsigned int)*v983;
    *(&importmedieum[20 * (signed int)v238] + SHIDWORD(v238)) = *(_BYTE *)(a1 + 20LL * (signed int)v238 + SHIDWORD(v238));
    v833 = *(_BYTE *)(a1 + 20LL * (signed int)v238 + SHIDWORD(v238)) - 48;
    if ( v833 <= 0 || v833 > 9 )
      v454 = 0;
    if ( (v683 >> v833) & 1 )
      v454 = 0;
    v683 |= 1 << v833;
    v533 += v833;
    ++v983;
  }
  if ( v533 != 6 )
    v454 = 0;
  v534 = 0;
  v684 = 0;
  LODWORD(v239) = sub_110F4(&v1239, v1);
  v984 = v239;
  LODWORD(v240) = sub_1110E(&v1239);
  while ( v984 != v240 )
  {
    v241 = *v984;
    v1 = (unsigned int)*v984;
    *(&importmedieum[20 * (signed int)v241] + SHIDWORD(v241)) = *(_BYTE *)(a1 + 20LL * (signed int)v241 + SHIDWORD(v241));
    v834 = *(_BYTE *)(a1 + 20LL * (signed int)v241 + SHIDWORD(v241)) - 48;
    if ( v834 <= 0 || v834 > 9 )
      v454 = 0;
    if ( (v684 >> v834) & 1 )
      v454 = 0;
    v684 |= 1 << v834;
    v534 += v834;
    ++v984;
  }
  if ( v534 != 11 )
    v454 = 0;
  v535 = 0;
  v685 = 0;
  LODWORD(v242) = sub_110F4(&v1243, v1);
  v985 = v242;
  LODWORD(v243) = sub_1110E(&v1243);
  while ( v985 != v243 )
  {
    v244 = *v985;
    v1 = (unsigned int)*v985;
    *(&importmedieum[20 * (signed int)v244] + SHIDWORD(v244)) = *(_BYTE *)(a1 + 20LL * (signed int)v244 + SHIDWORD(v244));
    v835 = *(_BYTE *)(a1 + 20LL * (signed int)v244 + SHIDWORD(v244)) - 48;
    if ( v835 <= 0 || v835 > 9 )
      v454 = 0;
    if ( (v685 >> v835) & 1 )
      v454 = 0;
    v685 |= 1 << v835;
    v535 += v835;
    ++v985;
  }
  if ( v535 != 8 )
    v454 = 0;
  v536 = 0;
  v686 = 0;
  LODWORD(v245) = sub_110F4(&v1247, v1);
  v986 = v245;
  LODWORD(v246) = sub_1110E(&v1247);
  while ( v986 != v246 )
  {
    v247 = *v986;
    v1 = (unsigned int)*v986;
    *(&importmedieum[20 * (signed int)v247] + SHIDWORD(v247)) = *(_BYTE *)(a1 + 20LL * (signed int)v247 + SHIDWORD(v247));
    v836 = *(_BYTE *)(a1 + 20LL * (signed int)v247 + SHIDWORD(v247)) - 48;
    if ( v836 <= 0 || v836 > 9 )
      v454 = 0;
    if ( (v686 >> v836) & 1 )
      v454 = 0;
    v686 |= 1 << v836;
    v536 += v836;
    ++v986;
  }
  if ( v536 != 5 )
    v454 = 0;
  v537 = 0;
  v687 = 0;
  LODWORD(v248) = sub_1120C(&v1815);
  v987 = v248;
  LODWORD(v249) = sub_11226(&v1815);
  while ( v987 != v249 )
  {
    v250 = *v987;
    v1 = (unsigned int)*v987;
    *(&importmedieum[20 * (signed int)v250] + SHIDWORD(v250)) = *(_BYTE *)(a1 + 20LL * (signed int)v250 + SHIDWORD(v250));
    v837 = *(_BYTE *)(a1 + 20LL * (signed int)v250 + SHIDWORD(v250)) - 48;
    if ( v837 <= 0 || v837 > 9 )
      v454 = 0;
    if ( (v687 >> v837) & 1 )
      v454 = 0;
    v687 |= 1 << v837;
    v537 += v837;
    ++v987;
  }
  if ( v537 != 39 )
    v454 = 0;
  v538 = 0;
  v688 = 0;
  LODWORD(v251) = sub_110F4(&v1251, v1);
  v988 = v251;
  LODWORD(v252) = sub_1110E(&v1251);
  while ( v988 != v252 )
  {
    v253 = *v988;
    v1 = (unsigned int)*v988;
    *(&importmedieum[20 * (signed int)v253] + SHIDWORD(v253)) = *(_BYTE *)(a1 + 20LL * (signed int)v253 + SHIDWORD(v253));
    v838 = *(_BYTE *)(a1 + 20LL * (signed int)v253 + SHIDWORD(v253)) - 48;
    if ( v838 <= 0 || v838 > 9 )
      v454 = 0;
    if ( (v688 >> v838) & 1 )
      v454 = 0;
    v688 |= 1 << v838;
    v538 += v838;
    ++v988;
  }
  if ( v538 != 8 )
    v454 = 0;
  v539 = 0;
  v689 = 0;
  LODWORD(v254) = sub_1112C(&v1547);
  v989 = v254;
  LODWORD(v255) = sub_11146(&v1547);
  while ( v989 != v255 )
  {
    v256 = *v989;
    v1 = (unsigned int)*v989;
    *(&importmedieum[20 * (signed int)v256] + SHIDWORD(v256)) = *(_BYTE *)(a1 + 20LL * (signed int)v256 + SHIDWORD(v256));
    v839 = *(_BYTE *)(a1 + 20LL * (signed int)v256 + SHIDWORD(v256)) - 48;
    if ( v839 <= 0 || v839 > 9 )
      v454 = 0;
    if ( (v689 >> v839) & 1 )
      v454 = 0;
    v689 |= 1 << v839;
    v539 += v839;
    ++v989;
  }
  if ( v539 != 8 )
    v454 = 0;
  v540 = 0;
  v690 = 0;
  LODWORD(v257) = sub_110F4(&v1255, v1);
  v990 = v257;
  LODWORD(v258) = sub_1110E(&v1255);
  while ( v990 != v258 )
  {
    v259 = *v990;
    v1 = (unsigned int)*v990;
    *(&importmedieum[20 * (signed int)v259] + SHIDWORD(v259)) = *(_BYTE *)(a1 + 20LL * (signed int)v259 + SHIDWORD(v259));
    v840 = *(_BYTE *)(a1 + 20LL * (signed int)v259 + SHIDWORD(v259)) - 48;
    if ( v840 <= 0 || v840 > 9 )
      v454 = 0;
    if ( (v690 >> v840) & 1 )
      v454 = 0;
    v690 |= 1 << v840;
    v540 += v840;
    ++v990;
  }
  if ( v540 != 4 )
    v454 = 0;
  v541 = 0;
  v691 = 0;
  LODWORD(v260) = sub_110F4(&v1259, v1);
  v991 = v260;
  LODWORD(v261) = sub_1110E(&v1259);
  while ( v991 != v261 )
  {
    v262 = *v991;
    v1 = (unsigned int)*v991;
    *(&importmedieum[20 * (signed int)v262] + SHIDWORD(v262)) = *(_BYTE *)(a1 + 20LL * (signed int)v262 + SHIDWORD(v262));
    v841 = *(_BYTE *)(a1 + 20LL * (signed int)v262 + SHIDWORD(v262)) - 48;
    if ( v841 <= 0 || v841 > 9 )
      v454 = 0;
    if ( (v691 >> v841) & 1 )
      v454 = 0;
    v691 |= 1 << v841;
    v541 += v841;
    ++v991;
  }
  if ( v541 != 15 )
    v454 = 0;
  v542 = 0;
  v692 = 0;
  LODWORD(v263) = sub_110F4(&v1263, v1);
  v992 = v263;
  LODWORD(v264) = sub_1110E(&v1263);
  while ( v992 != v264 )
  {
    v265 = *v992;
    v1 = (unsigned int)*v992;
    *(&importmedieum[20 * (signed int)v265] + SHIDWORD(v265)) = *(_BYTE *)(a1 + 20LL * (signed int)v265 + SHIDWORD(v265));
    v842 = *(_BYTE *)(a1 + 20LL * (signed int)v265 + SHIDWORD(v265)) - 48;
    if ( v842 <= 0 || v842 > 9 )
      v454 = 0;
    if ( (v692 >> v842) & 1 )
      v454 = 0;
    v692 |= 1 << v842;
    v542 += v842;
    ++v992;
  }
  if ( v542 != 10 )
    v454 = 0;
  v543 = 0;
  v693 = 0;
  LODWORD(v266) = sub_110F4(&v1267, v1);
  v993 = v266;
  LODWORD(v267) = sub_1110E(&v1267);
  while ( v993 != v267 )
  {
    v268 = *v993;
    v1 = (unsigned int)*v993;
    *(&importmedieum[20 * (signed int)v268] + SHIDWORD(v268)) = *(_BYTE *)(a1 + 20LL * (signed int)v268 + SHIDWORD(v268));
    v843 = *(_BYTE *)(a1 + 20LL * (signed int)v268 + SHIDWORD(v268)) - 48;
    if ( v843 <= 0 || v843 > 9 )
      v454 = 0;
    if ( (v693 >> v843) & 1 )
      v454 = 0;
    v693 |= 1 << v843;
    v543 += v843;
    ++v993;
  }
  if ( v543 != 9 )
    v454 = 0;
  v544 = 0;
  v694 = 0;
  LODWORD(v269) = sub_110F4(&v1271, v1);
  v994 = v269;
  LODWORD(v270) = sub_1110E(&v1271);
  while ( v994 != v270 )
  {
    v271 = *v994;
    v1 = (unsigned int)*v994;
    *(&importmedieum[20 * (signed int)v271] + SHIDWORD(v271)) = *(_BYTE *)(a1 + 20LL * (signed int)v271 + SHIDWORD(v271));
    v844 = *(_BYTE *)(a1 + 20LL * (signed int)v271 + SHIDWORD(v271)) - 48;
    if ( v844 <= 0 || v844 > 9 )
      v454 = 0;
    if ( (v694 >> v844) & 1 )
      v454 = 0;
    v694 |= 1 << v844;
    v544 += v844;
    ++v994;
  }
  if ( v544 != 13 )
    v454 = 0;
  v545 = 0;
  v695 = 0;
  LODWORD(v272) = sub_110F4(&v1275, v1);
  v995 = v272;
  LODWORD(v273) = sub_1110E(&v1275);
  while ( v995 != v273 )
  {
    v274 = *v995;
    v1 = (unsigned int)*v995;
    *(&importmedieum[20 * (signed int)v274] + SHIDWORD(v274)) = *(_BYTE *)(a1 + 20LL * (signed int)v274 + SHIDWORD(v274));
    v845 = *(_BYTE *)(a1 + 20LL * (signed int)v274 + SHIDWORD(v274)) - 48;
    if ( v845 <= 0 || v845 > 9 )
      v454 = 0;
    if ( (v695 >> v845) & 1 )
      v454 = 0;
    v695 |= 1 << v845;
    v545 += v845;
    ++v995;
  }
  if ( v545 != 9 )
    v454 = 0;
  v546 = 0;
  v696 = 0;
  LODWORD(v275) = sub_110F4(&v1279, v1);
  v996 = v275;
  LODWORD(v276) = sub_1110E(&v1279);
  while ( v996 != v276 )
  {
    v277 = *v996;
    v1 = (unsigned int)*v996;
    *(&importmedieum[20 * (signed int)v277] + SHIDWORD(v277)) = *(_BYTE *)(a1 + 20LL * (signed int)v277 + SHIDWORD(v277));
    v846 = *(_BYTE *)(a1 + 20LL * (signed int)v277 + SHIDWORD(v277)) - 48;
    if ( v846 <= 0 || v846 > 9 )
      v454 = 0;
    if ( (v696 >> v846) & 1 )
      v454 = 0;
    v696 |= 1 << v846;
    v546 += v846;
    ++v996;
  }
  if ( v546 != 11 )
    v454 = 0;
  v547 = 0;
  v697 = 0;
  LODWORD(v278) = sub_110F4(&v1283, v1);
  v997 = v278;
  LODWORD(v279) = sub_1110E(&v1283);
  while ( v997 != v279 )
  {
    v280 = *v997;
    v1 = (unsigned int)*v997;
    *(&importmedieum[20 * (signed int)v280] + SHIDWORD(v280)) = *(_BYTE *)(a1 + 20LL * (signed int)v280 + SHIDWORD(v280));
    v847 = *(_BYTE *)(a1 + 20LL * (signed int)v280 + SHIDWORD(v280)) - 48;
    if ( v847 <= 0 || v847 > 9 )
      v454 = 0;
    if ( (v697 >> v847) & 1 )
      v454 = 0;
    v697 |= 1 << v847;
    v547 += v847;
    ++v997;
  }
  if ( v547 != 14 )
    v454 = 0;
  v548 = 0;
  v698 = 0;
  LODWORD(v281) = sub_110F4(&v1287, v1);
  v998 = v281;
  LODWORD(v282) = sub_1110E(&v1287);
  while ( v998 != v282 )
  {
    v283 = *v998;
    v1 = (unsigned int)*v998;
    *(&importmedieum[20 * (signed int)v283] + SHIDWORD(v283)) = *(_BYTE *)(a1 + 20LL * (signed int)v283 + SHIDWORD(v283));
    v848 = *(_BYTE *)(a1 + 20LL * (signed int)v283 + SHIDWORD(v283)) - 48;
    if ( v848 <= 0 || v848 > 9 )
      v454 = 0;
    if ( (v698 >> v848) & 1 )
      v454 = 0;
    v698 |= 1 << v848;
    v548 += v848;
    ++v998;
  }
  if ( v548 != 13 )
    v454 = 0;
  v549 = 0;
  v699 = 0;
  LODWORD(v284) = sub_1112C(&v1553);
  v999 = v284;
  LODWORD(v285) = sub_11146(&v1553);
  while ( v999 != v285 )
  {
    v286 = *v999;
    v1 = (unsigned int)*v999;
    *(&importmedieum[20 * (signed int)v286] + SHIDWORD(v286)) = *(_BYTE *)(a1 + 20LL * (signed int)v286 + SHIDWORD(v286));
    v849 = *(_BYTE *)(a1 + 20LL * (signed int)v286 + SHIDWORD(v286)) - 48;
    if ( v849 <= 0 || v849 > 9 )
      v454 = 0;
    if ( (v699 >> v849) & 1 )
      v454 = 0;
    v699 |= 1 << v849;
    v549 += v849;
    ++v999;
  }
  if ( v549 != 21 )
    v454 = 0;
  v550 = 0;
  v700 = 0;
  LODWORD(v287) = sub_1112C(&v1559);
  v1000 = v287;
  LODWORD(v288) = sub_11146(&v1559);
  while ( v1000 != v288 )
  {
    v289 = *v1000;
    v1 = (unsigned int)*v1000;
    *(&importmedieum[20 * (signed int)v289] + SHIDWORD(v289)) = *(_BYTE *)(a1 + 20LL * (signed int)v289 + SHIDWORD(v289));
    v850 = *(_BYTE *)(a1 + 20LL * (signed int)v289 + SHIDWORD(v289)) - 48;
    if ( v850 <= 0 || v850 > 9 )
      v454 = 0;
    if ( (v700 >> v850) & 1 )
      v454 = 0;
    v700 |= 1 << v850;
    v550 += v850;
    ++v1000;
  }
  if ( v550 != 8 )
    v454 = 0;
  v551 = 0;
  v701 = 0;
  LODWORD(v290) = sub_111D4(&v1655);
  v1001 = v290;
  LODWORD(v291) = sub_111EE(&v1655);
  while ( v1001 != v291 )
  {
    v292 = *v1001;
    v1 = (unsigned int)*v1001;
    *(&importmedieum[20 * (signed int)v292] + SHIDWORD(v292)) = *(_BYTE *)(a1 + 20LL * (signed int)v292 + SHIDWORD(v292));
    v851 = *(_BYTE *)(a1 + 20LL * (signed int)v292 + SHIDWORD(v292)) - 48;
    if ( v851 <= 0 || v851 > 9 )
      v454 = 0;
    if ( (v701 >> v851) & 1 )
      v454 = 0;
    v701 |= 1 << v851;
    v551 += v851;
    ++v1001;
  }
  if ( v551 != 20 )
    v454 = 0;
  v552 = 0;
  v702 = 0;
  LODWORD(v293) = sub_110F4(&v1291, v1);
  v1002 = v293;
  LODWORD(v294) = sub_1110E(&v1291);
  while ( v1002 != v294 )
  {
    v295 = *v1002;
    v1 = (unsigned int)*v1002;
    *(&importmedieum[20 * (signed int)v295] + SHIDWORD(v295)) = *(_BYTE *)(a1 + 20LL * (signed int)v295 + SHIDWORD(v295));
    v852 = *(_BYTE *)(a1 + 20LL * (signed int)v295 + SHIDWORD(v295)) - 48;
    if ( v852 <= 0 || v852 > 9 )
      v454 = 0;
    if ( (v702 >> v852) & 1 )
      v454 = 0;
    v702 |= 1 << v852;
    v552 += v852;
    ++v1002;
  }
  if ( v552 != 14 )
    v454 = 0;
  v553 = 0;
  v703 = 0;
  LODWORD(v296) = sub_110F4(&v1295, v1);
  v1003 = v296;
  LODWORD(v297) = sub_1110E(&v1295);
  while ( v1003 != v297 )
  {
    v298 = *v1003;
    v1 = (unsigned int)*v1003;
    *(&importmedieum[20 * (signed int)v298] + SHIDWORD(v298)) = *(_BYTE *)(a1 + 20LL * (signed int)v298 + SHIDWORD(v298));
    v853 = *(_BYTE *)(a1 + 20LL * (signed int)v298 + SHIDWORD(v298)) - 48;
    if ( v853 <= 0 || v853 > 9 )
      v454 = 0;
    if ( (v703 >> v853) & 1 )
      v454 = 0;
    v703 |= 1 << v853;
    v553 += v853;
    ++v1003;
  }
  if ( v553 != 12 )
    v454 = 0;
  v554 = 0;
  v704 = 0;
  LODWORD(v299) = sub_110F4(&v1299, v1);
  v1004 = v299;
  LODWORD(v300) = sub_1110E(&v1299);
  while ( v1004 != v300 )
  {
    v301 = *v1004;
    v1 = (unsigned int)*v1004;
    *(&importmedieum[20 * (signed int)v301] + SHIDWORD(v301)) = *(_BYTE *)(a1 + 20LL * (signed int)v301 + SHIDWORD(v301));
    v854 = *(_BYTE *)(a1 + 20LL * (signed int)v301 + SHIDWORD(v301)) - 48;
    if ( v854 <= 0 || v854 > 9 )
      v454 = 0;
    if ( (v704 >> v854) & 1 )
      v454 = 0;
    v704 |= 1 << v854;
    v554 += v854;
    ++v1004;
  }
  if ( v554 != 5 )
    v454 = 0;
  v555 = 0;
  v705 = 0;
  LODWORD(v302) = sub_110F4(&v1303, v1);
  v1005 = v302;
  LODWORD(v303) = sub_1110E(&v1303);
  while ( v1005 != v303 )
  {
    v304 = *v1005;
    v1 = (unsigned int)*v1005;
    *(&importmedieum[20 * (signed int)v304] + SHIDWORD(v304)) = *(_BYTE *)(a1 + 20LL * (signed int)v304 + SHIDWORD(v304));
    v855 = *(_BYTE *)(a1 + 20LL * (signed int)v304 + SHIDWORD(v304)) - 48;
    if ( v855 <= 0 || v855 > 9 )
      v454 = 0;
    if ( (v705 >> v855) & 1 )
      v454 = 0;
    v705 |= 1 << v855;
    v555 += v855;
    ++v1005;
  }
  if ( v555 != 9 )
    v454 = 0;
  v556 = 0;
  v706 = 0;
  LODWORD(v305) = sub_110F4(&v1307, v1);
  v1006 = v305;
  LODWORD(v306) = sub_1110E(&v1307);
  while ( v1006 != v306 )
  {
    v307 = *v1006;
    v1 = (unsigned int)*v1006;
    *(&importmedieum[20 * (signed int)v307] + SHIDWORD(v307)) = *(_BYTE *)(a1 + 20LL * (signed int)v307 + SHIDWORD(v307));
    v856 = *(_BYTE *)(a1 + 20LL * (signed int)v307 + SHIDWORD(v307)) - 48;
    if ( v856 <= 0 || v856 > 9 )
      v454 = 0;
    if ( (v706 >> v856) & 1 )
      v454 = 0;
    v706 |= 1 << v856;
    v556 += v856;
    ++v1006;
  }
  if ( v556 != 10 )
    v454 = 0;
  v557 = 0;
  v707 = 0;
  LODWORD(v308) = sub_110F4(&v1311, v1);
  v1007 = v308;
  LODWORD(v309) = sub_1110E(&v1311);
  while ( v1007 != v309 )
  {
    v310 = *v1007;
    v1 = (unsigned int)*v1007;
    *(&importmedieum[20 * (signed int)v310] + SHIDWORD(v310)) = *(_BYTE *)(a1 + 20LL * (signed int)v310 + SHIDWORD(v310));
    v857 = *(_BYTE *)(a1 + 20LL * (signed int)v310 + SHIDWORD(v310)) - 48;
    if ( v857 <= 0 || v857 > 9 )
      v454 = 0;
    if ( (v707 >> v857) & 1 )
      v454 = 0;
    v707 |= 1 << v857;
    v557 += v857;
    ++v1007;
  }
  if ( v557 != 14 )
    v454 = 0;
  v558 = 0;
  v708 = 0;
  LODWORD(v311) = sub_110F4(&v1315, v1);
  v1008 = v311;
  LODWORD(v312) = sub_1110E(&v1315);
  while ( v1008 != v312 )
  {
    v313 = *v1008;
    v1 = (unsigned int)*v1008;
    *(&importmedieum[20 * (signed int)v313] + SHIDWORD(v313)) = *(_BYTE *)(a1 + 20LL * (signed int)v313 + SHIDWORD(v313));
    v858 = *(_BYTE *)(a1 + 20LL * (signed int)v313 + SHIDWORD(v313)) - 48;
    if ( v858 <= 0 || v858 > 9 )
      v454 = 0;
    if ( (v708 >> v858) & 1 )
      v454 = 0;
    v708 |= 1 << v858;
    v558 += v858;
    ++v1008;
  }
  if ( v558 != 14 )
    v454 = 0;
  v559 = 0;
  v709 = 0;
  LODWORD(v314) = sub_110F4(&v1319, v1);
  v1009 = v314;
  LODWORD(v315) = sub_1110E(&v1319);
  while ( v1009 != v315 )
  {
    v316 = *v1009;
    v1 = (unsigned int)*v1009;
    *(&importmedieum[20 * (signed int)v316] + SHIDWORD(v316)) = *(_BYTE *)(a1 + 20LL * (signed int)v316 + SHIDWORD(v316));
    v859 = *(_BYTE *)(a1 + 20LL * (signed int)v316 + SHIDWORD(v316)) - 48;
    if ( v859 <= 0 || v859 > 9 )
      v454 = 0;
    if ( (v709 >> v859) & 1 )
      v454 = 0;
    v709 |= 1 << v859;
    v559 += v859;
    ++v1009;
  }
  if ( v559 != 12 )
    v454 = 0;
  v560 = 0;
  v710 = 0;
  LODWORD(v317) = sub_110F4(&v1323, v1);
  v1010 = v317;
  LODWORD(v318) = sub_1110E(&v1323);
  while ( v1010 != v318 )
  {
    v319 = *v1010;
    v1 = (unsigned int)*v1010;
    *(&importmedieum[20 * (signed int)v319] + SHIDWORD(v319)) = *(_BYTE *)(a1 + 20LL * (signed int)v319 + SHIDWORD(v319));
    v860 = *(_BYTE *)(a1 + 20LL * (signed int)v319 + SHIDWORD(v319)) - 48;
    if ( v860 <= 0 || v860 > 9 )
      v454 = 0;
    if ( (v710 >> v860) & 1 )
      v454 = 0;
    v710 |= 1 << v860;
    v560 += v860;
    ++v1010;
  }
  if ( v560 != 13 )
    v454 = 0;
  v561 = 0;
  v711 = 0;
  LODWORD(v320) = sub_110F4(&v1327, v1);
  v1011 = v320;
  LODWORD(v321) = sub_1110E(&v1327);
  while ( v1011 != v321 )
  {
    v322 = *v1011;
    v1 = (unsigned int)*v1011;
    *(&importmedieum[20 * (signed int)v322] + SHIDWORD(v322)) = *(_BYTE *)(a1 + 20LL * (signed int)v322 + SHIDWORD(v322));
    v861 = *(_BYTE *)(a1 + 20LL * (signed int)v322 + SHIDWORD(v322)) - 48;
    if ( v861 <= 0 || v861 > 9 )
      v454 = 0;
    if ( (v711 >> v861) & 1 )
      v454 = 0;
    v711 |= 1 << v861;
    v561 += v861;
    ++v1011;
  }
  if ( v561 != 9 )
    v454 = 0;
  v562 = 0;
  v712 = 0;
  LODWORD(v323) = sub_1112C(&v1565);
  v1012 = v323;
  LODWORD(v324) = sub_11146(&v1565);
  while ( v1012 != v324 )
  {
    v325 = *v1012;
    v1 = (unsigned int)*v1012;
    *(&importmedieum[20 * (signed int)v325] + SHIDWORD(v325)) = *(_BYTE *)(a1 + 20LL * (signed int)v325 + SHIDWORD(v325));
    v862 = *(_BYTE *)(a1 + 20LL * (signed int)v325 + SHIDWORD(v325)) - 48;
    if ( v862 <= 0 || v862 > 9 )
      v454 = 0;
    if ( (v712 >> v862) & 1 )
      v454 = 0;
    v712 |= 1 << v862;
    v562 += v862;
    ++v1012;
  }
  if ( v562 != 16 )
    v454 = 0;
  v563 = 0;
  v713 = 0;
  LODWORD(v326) = sub_110F4(&v1331, v1);
  v1013 = v326;
  LODWORD(v327) = sub_1110E(&v1331);
  while ( v1013 != v327 )
  {
    v328 = *v1013;
    v1 = (unsigned int)*v1013;
    *(&importmedieum[20 * (signed int)v328] + SHIDWORD(v328)) = *(_BYTE *)(a1 + 20LL * (signed int)v328 + SHIDWORD(v328));
    v863 = *(_BYTE *)(a1 + 20LL * (signed int)v328 + SHIDWORD(v328)) - 48;
    if ( v863 <= 0 || v863 > 9 )
      v454 = 0;
    if ( (v713 >> v863) & 1 )
      v454 = 0;
    v713 |= 1 << v863;
    v563 += v863;
    ++v1013;
  }
  if ( v563 != 6 )
    v454 = 0;
  v564 = 0;
  v714 = 0;
  LODWORD(v329) = sub_1120C(&v1831);
  v1014 = v329;
  LODWORD(v330) = sub_11226(&v1831);
  while ( v1014 != v330 )
  {
    v331 = *v1014;
    v1 = (unsigned int)*v1014;
    *(&importmedieum[20 * (signed int)v331] + SHIDWORD(v331)) = *(_BYTE *)(a1 + 20LL * (signed int)v331 + SHIDWORD(v331));
    v864 = *(_BYTE *)(a1 + 20LL * (signed int)v331 + SHIDWORD(v331)) - 48;
    if ( v864 <= 0 || v864 > 9 )
      v454 = 0;
    if ( (v714 >> v864) & 1 )
      v454 = 0;
    v714 |= 1 << v864;
    v564 += v864;
    ++v1014;
  }
  if ( v564 != 40 )
    v454 = 0;
  v565 = 0;
  v715 = 0;
  LODWORD(v332) = sub_110F4(&v1335, v1);
  v1015 = v332;
  LODWORD(v333) = sub_1110E(&v1335);
  while ( v1015 != v333 )
  {
    v334 = *v1015;
    v1 = (unsigned int)*v1015;
    *(&importmedieum[20 * (signed int)v334] + SHIDWORD(v334)) = *(_BYTE *)(a1 + 20LL * (signed int)v334 + SHIDWORD(v334));
    v865 = *(_BYTE *)(a1 + 20LL * (signed int)v334 + SHIDWORD(v334)) - 48;
    if ( v865 <= 0 || v865 > 9 )
      v454 = 0;
    if ( (v715 >> v865) & 1 )
      v454 = 0;
    v715 |= 1 << v865;
    v565 += v865;
    ++v1015;
  }
  if ( v565 != 4 )
    v454 = 0;
  v566 = 0;
  v716 = 0;
  LODWORD(v335) = sub_110F4(&v1339, v1);
  v1016 = v335;
  LODWORD(v336) = sub_1110E(&v1339);
  while ( v1016 != v336 )
  {
    v337 = *v1016;
    v1 = (unsigned int)*v1016;
    *(&importmedieum[20 * (signed int)v337] + SHIDWORD(v337)) = *(_BYTE *)(a1 + 20LL * (signed int)v337 + SHIDWORD(v337));
    v866 = *(_BYTE *)(a1 + 20LL * (signed int)v337 + SHIDWORD(v337)) - 48;
    if ( v866 <= 0 || v866 > 9 )
      v454 = 0;
    if ( (v716 >> v866) & 1 )
      v454 = 0;
    v716 |= 1 << v866;
    v566 += v866;
    ++v1016;
  }
  if ( v566 != 11 )
    v454 = 0;
  v567 = 0;
  v717 = 0;
  LODWORD(v338) = sub_1119C(&v1739);
  v1017 = v338;
  LODWORD(v339) = sub_111B6(&v1739);
  while ( v1017 != v339 )
  {
    v340 = *v1017;
    v1 = (unsigned int)*v1017;
    *(&importmedieum[20 * (signed int)v340] + SHIDWORD(v340)) = *(_BYTE *)(a1 + 20LL * (signed int)v340 + SHIDWORD(v340));
    v867 = *(_BYTE *)(a1 + 20LL * (signed int)v340 + SHIDWORD(v340)) - 48;
    if ( v867 <= 0 || v867 > 9 )
      v454 = 0;
    if ( (v717 >> v867) & 1 )
      v454 = 0;
    v717 |= 1 << v867;
    v567 += v867;
    ++v1017;
  }
  if ( v567 != 22 )
    v454 = 0;
  v568 = 0;
  v718 = 0;
  LODWORD(v341) = sub_110F4(&v1343, v1);
  v1018 = v341;
  LODWORD(v342) = sub_1110E(&v1343);
  while ( v1018 != v342 )
  {
    v343 = *v1018;
    v1 = (unsigned int)*v1018;
    *(&importmedieum[20 * (signed int)v343] + SHIDWORD(v343)) = *(_BYTE *)(a1 + 20LL * (signed int)v343 + SHIDWORD(v343));
    v868 = *(_BYTE *)(a1 + 20LL * (signed int)v343 + SHIDWORD(v343)) - 48;
    if ( v868 <= 0 || v868 > 9 )
      v454 = 0;
    if ( (v718 >> v868) & 1 )
      v454 = 0;
    v718 |= 1 << v868;
    v568 += v868;
    ++v1018;
  }
  if ( v568 != 16 )
    v454 = 0;
  v569 = 0;
  v719 = 0;
  LODWORD(v344) = sub_110F4(&v1347, v1);
  v1019 = v344;
  LODWORD(v345) = sub_1110E(&v1347);
  while ( v1019 != v345 )
  {
    v346 = *v1019;
    v1 = (unsigned int)*v1019;
    *(&importmedieum[20 * (signed int)v346] + SHIDWORD(v346)) = *(_BYTE *)(a1 + 20LL * (signed int)v346 + SHIDWORD(v346));
    v869 = *(_BYTE *)(a1 + 20LL * (signed int)v346 + SHIDWORD(v346)) - 48;
    if ( v869 <= 0 || v869 > 9 )
      v454 = 0;
    if ( (v719 >> v869) & 1 )
      v454 = 0;
    v719 |= 1 << v869;
    v569 += v869;
    ++v1019;
  }
  if ( v569 != 7 )
    v454 = 0;
  v570 = 0;
  v720 = 0;
  LODWORD(v347) = sub_111D4(&v1663);
  v1020 = v347;
  LODWORD(v348) = sub_111EE(&v1663);
  while ( v1020 != v348 )
  {
    v349 = *v1020;
    v1 = (unsigned int)*v1020;
    *(&importmedieum[20 * (signed int)v349] + SHIDWORD(v349)) = *(_BYTE *)(a1 + 20LL * (signed int)v349 + SHIDWORD(v349));
    v870 = *(_BYTE *)(a1 + 20LL * (signed int)v349 + SHIDWORD(v349)) - 48;
    if ( v870 <= 0 || v870 > 9 )
      v454 = 0;
    if ( (v720 >> v870) & 1 )
      v454 = 0;
    v720 |= 1 << v870;
    v570 += v870;
    ++v1020;
  }
  if ( v570 != 10 )
    v454 = 0;
  v571 = 0;
  v721 = 0;
  LODWORD(v350) = sub_110F4(&v1351, v1);
  v1021 = v350;
  LODWORD(v351) = sub_1110E(&v1351);
  while ( v1021 != v351 )
  {
    v352 = *v1021;
    v1 = (unsigned int)*v1021;
    *(&importmedieum[20 * (signed int)v352] + SHIDWORD(v352)) = *(_BYTE *)(a1 + 20LL * (signed int)v352 + SHIDWORD(v352));
    v871 = *(_BYTE *)(a1 + 20LL * (signed int)v352 + SHIDWORD(v352)) - 48;
    if ( v871 <= 0 || v871 > 9 )
      v454 = 0;
    if ( (v721 >> v871) & 1 )
      v454 = 0;
    v721 |= 1 << v871;
    v571 += v871;
    ++v1021;
  }
  if ( v571 != 11 )
    v454 = 0;
  v572 = 0;
  v722 = 0;
  LODWORD(v353) = sub_1112C(&v1571);
  v1022 = v353;
  LODWORD(v354) = sub_11146(&v1571);
  while ( v1022 != v354 )
  {
    v355 = *v1022;
    v1 = (unsigned int)*v1022;
    *(&importmedieum[20 * (signed int)v355] + SHIDWORD(v355)) = *(_BYTE *)(a1 + 20LL * (signed int)v355 + SHIDWORD(v355));
    v872 = *(_BYTE *)(a1 + 20LL * (signed int)v355 + SHIDWORD(v355)) - 48;
    if ( v872 <= 0 || v872 > 9 )
      v454 = 0;
    if ( (v722 >> v872) & 1 )
      v454 = 0;
    v722 |= 1 << v872;
    v572 += v872;
    ++v1022;
  }
  if ( v572 != 10 )
    v454 = 0;
  v573 = 0;
  v723 = 0;
  LODWORD(v356) = sub_110F4(&v1355, v1);
  v1023 = v356;
  LODWORD(v357) = sub_1110E(&v1355);
  while ( v1023 != v357 )
  {
    v358 = *v1023;
    v1 = (unsigned int)*v1023;
    *(&importmedieum[20 * (signed int)v358] + SHIDWORD(v358)) = *(_BYTE *)(a1 + 20LL * (signed int)v358 + SHIDWORD(v358));
    v873 = *(_BYTE *)(a1 + 20LL * (signed int)v358 + SHIDWORD(v358)) - 48;
    if ( v873 <= 0 || v873 > 9 )
      v454 = 0;
    if ( (v723 >> v873) & 1 )
      v454 = 0;
    v723 |= 1 << v873;
    v573 += v873;
    ++v1023;
  }
  if ( v573 != 13 )
    v454 = 0;
  v574 = 0;
  v724 = 0;
  LODWORD(v359) = sub_110F4(&v1359, v1);
  v1024 = v359;
  LODWORD(v360) = sub_1110E(&v1359);
  while ( v1024 != v360 )
  {
    v361 = *v1024;
    v1 = (unsigned int)*v1024;
    *(&importmedieum[20 * (signed int)v361] + SHIDWORD(v361)) = *(_BYTE *)(a1 + 20LL * (signed int)v361 + SHIDWORD(v361));
    v874 = *(_BYTE *)(a1 + 20LL * (signed int)v361 + SHIDWORD(v361)) - 48;
    if ( v874 <= 0 || v874 > 9 )
      v454 = 0;
    if ( (v724 >> v874) & 1 )
      v454 = 0;
    v724 |= 1 << v874;
    v574 += v874;
    ++v1024;
  }
  if ( v574 != 9 )
    v454 = 0;
  v575 = 0;
  v725 = 0;
  LODWORD(v362) = sub_110F4(&v1363, v1);
  v1025 = v362;
  LODWORD(v363) = sub_1110E(&v1363);
  while ( v1025 != v363 )
  {
    v364 = *v1025;
    v1 = (unsigned int)*v1025;
    *(&importmedieum[20 * (signed int)v364] + SHIDWORD(v364)) = *(_BYTE *)(a1 + 20LL * (signed int)v364 + SHIDWORD(v364));
    v875 = *(_BYTE *)(a1 + 20LL * (signed int)v364 + SHIDWORD(v364)) - 48;
    if ( v875 <= 0 || v875 > 9 )
      v454 = 0;
    if ( (v725 >> v875) & 1 )
      v454 = 0;
    v725 |= 1 << v875;
    v575 += v875;
    ++v1025;
  }
  if ( v575 != 10 )
    v454 = 0;
  v576 = 0;
  v726 = 0;
  LODWORD(v365) = sub_110F4(&v1367, v1);
  v1026 = v365;
  LODWORD(v366) = sub_1110E(&v1367);
  while ( v1026 != v366 )
  {
    v367 = *v1026;
    v1 = (unsigned int)*v1026;
    *(&importmedieum[20 * (signed int)v367] + SHIDWORD(v367)) = *(_BYTE *)(a1 + 20LL * (signed int)v367 + SHIDWORD(v367));
    v876 = *(_BYTE *)(a1 + 20LL * (signed int)v367 + SHIDWORD(v367)) - 48;
    if ( v876 <= 0 || v876 > 9 )
      v454 = 0;
    if ( (v726 >> v876) & 1 )
      v454 = 0;
    v726 |= 1 << v876;
    v576 += v876;
    ++v1026;
  }
  if ( v576 != 12 )
    v454 = 0;
  v577 = 0;
  v727 = 0;
  LODWORD(v368) = sub_1120C(&v1847);
  v1027 = v368;
  LODWORD(v369) = sub_11226(&v1847);
  while ( v1027 != v369 )
  {
    v370 = *v1027;
    v1 = (unsigned int)*v1027;
    *(&importmedieum[20 * (signed int)v370] + SHIDWORD(v370)) = *(_BYTE *)(a1 + 20LL * (signed int)v370 + SHIDWORD(v370));
    v877 = *(_BYTE *)(a1 + 20LL * (signed int)v370 + SHIDWORD(v370)) - 48;
    if ( v877 <= 0 || v877 > 9 )
      v454 = 0;
    if ( (v727 >> v877) & 1 )
      v454 = 0;
    v727 |= 1 << v877;
    v577 += v877;
    ++v1027;
  }
  if ( v577 != 42 )
    v454 = 0;
  v578 = 0;
  v728 = 0;
  LODWORD(v371) = sub_110F4(&v1371, v1);
  v1028 = v371;
  LODWORD(v372) = sub_1110E(&v1371);
  while ( v1028 != v372 )
  {
    v373 = *v1028;
    v1 = (unsigned int)*v1028;
    *(&importmedieum[20 * (signed int)v373] + SHIDWORD(v373)) = *(_BYTE *)(a1 + 20LL * (signed int)v373 + SHIDWORD(v373));
    v878 = *(_BYTE *)(a1 + 20LL * (signed int)v373 + SHIDWORD(v373)) - 48;
    if ( v878 <= 0 || v878 > 9 )
      v454 = 0;
    if ( (v728 >> v878) & 1 )
      v454 = 0;
    v728 |= 1 << v878;
    v578 += v878;
    ++v1028;
  }
  if ( v578 != 17 )
    v454 = 0;
  v579 = 0;
  v729 = 0;
  LODWORD(v374) = sub_110F4(&v1375, v1);
  v1029 = v374;
  LODWORD(v375) = sub_1110E(&v1375);
  while ( v1029 != v375 )
  {
    v376 = *v1029;
    v1 = (unsigned int)*v1029;
    *(&importmedieum[20 * (signed int)v376] + SHIDWORD(v376)) = *(_BYTE *)(a1 + 20LL * (signed int)v376 + SHIDWORD(v376));
    v879 = *(_BYTE *)(a1 + 20LL * (signed int)v376 + SHIDWORD(v376)) - 48;
    if ( v879 <= 0 || v879 > 9 )
      v454 = 0;
    if ( (v729 >> v879) & 1 )
      v454 = 0;
    v729 |= 1 << v879;
    v579 += v879;
    ++v1029;
  }
  if ( v579 != 10 )
    v454 = 0;
  v580 = 0;
  v730 = 0;
  LODWORD(v377) = sub_110F4(&v1379, v1);
  v1030 = v377;
  LODWORD(v378) = sub_1110E(&v1379);
  while ( v1030 != v378 )
  {
    v379 = *v1030;
    v1 = (unsigned int)*v1030;
    *(&importmedieum[20 * (signed int)v379] + SHIDWORD(v379)) = *(_BYTE *)(a1 + 20LL * (signed int)v379 + SHIDWORD(v379));
    v880 = *(_BYTE *)(a1 + 20LL * (signed int)v379 + SHIDWORD(v379)) - 48;
    if ( v880 <= 0 || v880 > 9 )
      v454 = 0;
    if ( (v730 >> v880) & 1 )
      v454 = 0;
    v730 |= 1 << v880;
    v580 += v880;
    ++v1030;
  }
  if ( v580 != 8 )
    v454 = 0;
  v581 = 0;
  v731 = 0;
  LODWORD(v380) = sub_110F4(&v1383, v1);
  v1031 = v380;
  LODWORD(v381) = sub_1110E(&v1383);
  while ( v1031 != v381 )
  {
    v382 = *v1031;
    v1 = (unsigned int)*v1031;
    *(&importmedieum[20 * (signed int)v382] + SHIDWORD(v382)) = *(_BYTE *)(a1 + 20LL * (signed int)v382 + SHIDWORD(v382));
    v881 = *(_BYTE *)(a1 + 20LL * (signed int)v382 + SHIDWORD(v382)) - 48;
    if ( v881 <= 0 || v881 > 9 )
      v454 = 0;
    if ( (v731 >> v881) & 1 )
      v454 = 0;
    v731 |= 1 << v881;
    v581 += v881;
    ++v1031;
  }
  if ( v581 != 10 )
    v454 = 0;
  v582 = 0;
  v732 = 0;
  LODWORD(v383) = sub_110F4(&v1387, v1);
  v1032 = v383;
  LODWORD(v384) = sub_1110E(&v1387);
  while ( v1032 != v384 )
  {
    v385 = *v1032;
    v1 = (unsigned int)*v1032;
    *(&importmedieum[20 * (signed int)v385] + SHIDWORD(v385)) = *(_BYTE *)(a1 + 20LL * (signed int)v385 + SHIDWORD(v385));
    v882 = *(_BYTE *)(a1 + 20LL * (signed int)v385 + SHIDWORD(v385)) - 48;
    if ( v882 <= 0 || v882 > 9 )
      v454 = 0;
    if ( (v732 >> v882) & 1 )
      v454 = 0;
    v732 |= 1 << v882;
    v582 += v882;
    ++v1032;
  }
  if ( v582 != 9 )
    v454 = 0;
  v583 = 0;
  v733 = 0;
  LODWORD(v386) = sub_110F4(&v1391, v1);
  v1033 = v386;
  LODWORD(v387) = sub_1110E(&v1391);
  while ( v1033 != v387 )
  {
    v388 = *v1033;
    v1 = (unsigned int)*v1033;
    *(&importmedieum[20 * (signed int)v388] + SHIDWORD(v388)) = *(_BYTE *)(a1 + 20LL * (signed int)v388 + SHIDWORD(v388));
    v883 = *(_BYTE *)(a1 + 20LL * (signed int)v388 + SHIDWORD(v388)) - 48;
    if ( v883 <= 0 || v883 > 9 )
      v454 = 0;
    if ( (v733 >> v883) & 1 )
      v454 = 0;
    v733 |= 1 << v883;
    v583 += v883;
    ++v1033;
  }
  if ( v583 != 14 )
    v454 = 0;
  v584 = 0;
  v734 = 0;
  LODWORD(v389) = sub_110F4(&v1395, v1);
  v1034 = v389;
  LODWORD(v390) = sub_1110E(&v1395);
  while ( v1034 != v390 )
  {
    v391 = *v1034;
    v1 = (unsigned int)*v1034;
    *(&importmedieum[20 * (signed int)v391] + SHIDWORD(v391)) = *(_BYTE *)(a1 + 20LL * (signed int)v391 + SHIDWORD(v391));
    v884 = *(_BYTE *)(a1 + 20LL * (signed int)v391 + SHIDWORD(v391)) - 48;
    if ( v884 <= 0 || v884 > 9 )
      v454 = 0;
    if ( (v734 >> v884) & 1 )
      v454 = 0;
    v734 |= 1 << v884;
    v584 += v884;
    ++v1034;
  }
  if ( v584 != 8 )
    v454 = 0;
  v585 = 0;
  v735 = 0;
  LODWORD(v392) = sub_110F4(&v1399, v1);
  v1035 = v392;
  LODWORD(v393) = sub_1110E(&v1399);
  while ( v1035 != v393 )
  {
    v394 = *v1035;
    v1 = (unsigned int)*v1035;
    *(&importmedieum[20 * (signed int)v394] + SHIDWORD(v394)) = *(_BYTE *)(a1 + 20LL * (signed int)v394 + SHIDWORD(v394));
    v885 = *(_BYTE *)(a1 + 20LL * (signed int)v394 + SHIDWORD(v394)) - 48;
    if ( v885 <= 0 || v885 > 9 )
      v454 = 0;
    if ( (v735 >> v885) & 1 )
      v454 = 0;
    v735 |= 1 << v885;
    v585 += v885;
    ++v1035;
  }
  if ( v585 != 8 )
    v454 = 0;
  v586 = 0;
  v736 = 0;
  LODWORD(v395) = sub_1119C(&v1749);
  v1036 = v395;
  LODWORD(v396) = sub_111B6(&v1749);
  while ( v1036 != v396 )
  {
    v397 = *v1036;
    v1 = (unsigned int)*v1036;
    *(&importmedieum[20 * (signed int)v397] + SHIDWORD(v397)) = *(_BYTE *)(a1 + 20LL * (signed int)v397 + SHIDWORD(v397));
    v886 = *(_BYTE *)(a1 + 20LL * (signed int)v397 + SHIDWORD(v397)) - 48;
    if ( v886 <= 0 || v886 > 9 )
      v454 = 0;
    if ( (v736 >> v886) & 1 )
      v454 = 0;
    v736 |= 1 << v886;
    v586 += v886;
    ++v1036;
  }
  if ( v586 != 26 )
    v454 = 0;
  v587 = 0;
  v737 = 0;
  LODWORD(v398) = sub_110F4(&v1403, v1);
  v1037 = v398;
  LODWORD(v399) = sub_1110E(&v1403);
  while ( v1037 != v399 )
  {
    v400 = *v1037;
    v1 = (unsigned int)*v1037;
    *(&importmedieum[20 * (signed int)v400] + SHIDWORD(v400)) = *(_BYTE *)(a1 + 20LL * (signed int)v400 + SHIDWORD(v400));
    v887 = *(_BYTE *)(a1 + 20LL * (signed int)v400 + SHIDWORD(v400)) - 48;
    if ( v887 <= 0 || v887 > 9 )
      v454 = 0;
    if ( (v737 >> v887) & 1 )
      v454 = 0;
    v737 |= 1 << v887;
    v587 += v887;
    ++v1037;
  }
  if ( v587 != 8 )
    v454 = 0;
  v588 = 0;
  v738 = 0;
  LODWORD(v401) = sub_111D4(&v1671);
  v1038 = v401;
  LODWORD(v402) = sub_111EE(&v1671);
  while ( v1038 != v402 )
  {
    v403 = *v1038;
    v1 = (unsigned int)*v1038;
    *(&importmedieum[20 * (signed int)v403] + SHIDWORD(v403)) = *(_BYTE *)(a1 + 20LL * (signed int)v403 + SHIDWORD(v403));
    v888 = *(_BYTE *)(a1 + 20LL * (signed int)v403 + SHIDWORD(v403)) - 48;
    if ( v888 <= 0 || v888 > 9 )
      v454 = 0;
    if ( (v738 >> v888) & 1 )
      v454 = 0;
    v738 |= 1 << v888;
    v588 += v888;
    ++v1038;
  }
  if ( v588 != 14 )
    v454 = 0;
  v589 = 0;
  v739 = 0;
  LODWORD(v404) = sub_110F4(&v1407, v1);
  v1039 = v404;
  LODWORD(v405) = sub_1110E(&v1407);
  while ( v1039 != v405 )
  {
    v406 = *v1039;
    v1 = (unsigned int)*v1039;
    *(&importmedieum[20 * (signed int)v406] + SHIDWORD(v406)) = *(_BYTE *)(a1 + 20LL * (signed int)v406 + SHIDWORD(v406));
    v889 = *(_BYTE *)(a1 + 20LL * (signed int)v406 + SHIDWORD(v406)) - 48;
    if ( v889 <= 0 || v889 > 9 )
      v454 = 0;
    if ( (v739 >> v889) & 1 )
      v454 = 0;
    v739 |= 1 << v889;
    v589 += v889;
    ++v1039;
  }
  if ( v589 != 9 )
    v454 = 0;
  v590 = 0;
  v740 = 0;
  LODWORD(v407) = sub_110F4(&v1411, v1);
  v1040 = v407;
  LODWORD(v408) = sub_1110E(&v1411);
  while ( v1040 != v408 )
  {
    v409 = *v1040;
    v1 = (unsigned int)*v1040;
    *(&importmedieum[20 * (signed int)v409] + SHIDWORD(v409)) = *(_BYTE *)(a1 + 20LL * (signed int)v409 + SHIDWORD(v409));
    v890 = *(_BYTE *)(a1 + 20LL * (signed int)v409 + SHIDWORD(v409)) - 48;
    if ( v890 <= 0 || v890 > 9 )
      v454 = 0;
    if ( (v740 >> v890) & 1 )
      v454 = 0;
    v740 |= 1 << v890;
    v590 += v890;
    ++v1040;
  }
  if ( v590 != 6 )
    v454 = 0;
  v591 = 0;
  v741 = 0;
  LODWORD(v410) = sub_110F4(&v1415, v1);
  v1041 = v410;
  LODWORD(v411) = sub_1110E(&v1415);
  while ( v1041 != v411 )
  {
    v412 = *v1041;
    v1 = (unsigned int)*v1041;
    *(&importmedieum[20 * (signed int)v412] + SHIDWORD(v412)) = *(_BYTE *)(a1 + 20LL * (signed int)v412 + SHIDWORD(v412));
    v891 = *(_BYTE *)(a1 + 20LL * (signed int)v412 + SHIDWORD(v412)) - 48;
    if ( v891 <= 0 || v891 > 9 )
      v454 = 0;
    if ( (v741 >> v891) & 1 )
      v454 = 0;
    v741 |= 1 << v891;
    v591 += v891;
    ++v1041;
  }
  if ( v591 != 15 )
    v454 = 0;
  v592 = 0;
  v742 = 0;
  LODWORD(v413) = sub_110F4(&v1419, v1);
  v1042 = v413;
  LODWORD(v414) = sub_1110E(&v1419);
  while ( v1042 != v414 )
  {
    v415 = *v1042;
    v1 = (unsigned int)*v1042;
    *(&importmedieum[20 * (signed int)v415] + SHIDWORD(v415)) = *(_BYTE *)(a1 + 20LL * (signed int)v415 + SHIDWORD(v415));
    v892 = *(_BYTE *)(a1 + 20LL * (signed int)v415 + SHIDWORD(v415)) - 48;
    if ( v892 <= 0 || v892 > 9 )
      v454 = 0;
    if ( (v742 >> v892) & 1 )
      v454 = 0;
    v742 |= 1 << v892;
    v592 += v892;
    ++v1042;
  }
  if ( v592 != 7 )
    v454 = 0;
  v593 = 0;
  v743 = 0;
  LODWORD(v416) = sub_110F4(&v1423, v1);
  v1043 = v416;
  LODWORD(v417) = sub_1110E(&v1423);
  while ( v1043 != v417 )
  {
    v418 = *v1043;
    v1 = (unsigned int)*v1043;
    *(&importmedieum[20 * (signed int)v418] + SHIDWORD(v418)) = *(_BYTE *)(a1 + 20LL * (signed int)v418 + SHIDWORD(v418));
    v893 = *(_BYTE *)(a1 + 20LL * (signed int)v418 + SHIDWORD(v418)) - 48;
    if ( v893 <= 0 || v893 > 9 )
      v454 = 0;
    if ( (v743 >> v893) & 1 )
      v454 = 0;
    v743 |= 1 << v893;
    v593 += v893;
    ++v1043;
  }
  if ( v593 != 8 )
    v454 = 0;
  v594 = 0;
  v744 = 0;
  LODWORD(v419) = sub_110F4(&v1427, v1);
  v1044 = v419;
  LODWORD(v420) = sub_1110E(&v1427);
  while ( v1044 != v420 )
  {
    v421 = *v1044;
    v1 = (unsigned int)*v1044;
    *(&importmedieum[20 * (signed int)v421] + SHIDWORD(v421)) = *(_BYTE *)(a1 + 20LL * (signed int)v421 + SHIDWORD(v421));
    v894 = *(_BYTE *)(a1 + 20LL * (signed int)v421 + SHIDWORD(v421)) - 48;
    if ( v894 <= 0 || v894 > 9 )
      v454 = 0;
    if ( (v744 >> v894) & 1 )
      v454 = 0;
    v744 |= 1 << v894;
    v594 += v894;
    ++v1044;
  }
  if ( v594 != 14 )
    v454 = 0;
  v595 = 0;
  v745 = 0;
  LODWORD(v422) = sub_110F4(&v1431, v1);
  v1045 = v422;
  LODWORD(v423) = sub_1110E(&v1431);
  while ( v1045 != v423 )
  {
    v424 = *v1045;
    v1 = (unsigned int)*v1045;
    *(&importmedieum[20 * (signed int)v424] + SHIDWORD(v424)) = *(_BYTE *)(a1 + 20LL * (signed int)v424 + SHIDWORD(v424));
    v895 = *(_BYTE *)(a1 + 20LL * (signed int)v424 + SHIDWORD(v424)) - 48;
    if ( v895 <= 0 || v895 > 9 )
      v454 = 0;
    if ( (v745 >> v895) & 1 )
      v454 = 0;
    v745 |= 1 << v895;
    v595 += v895;
    ++v1045;
  }
  if ( v595 != 6 )
    v454 = 0;
  v596 = 0;
  v746 = 0;
  LODWORD(v425) = sub_110F4(&v1435, v1);
  v1046 = v425;
  LODWORD(v426) = sub_1110E(&v1435);
  while ( v1046 != v426 )
  {
    v427 = *v1046;
    v1 = (unsigned int)*v1046;
    *(&importmedieum[20 * (signed int)v427] + SHIDWORD(v427)) = *(_BYTE *)(a1 + 20LL * (signed int)v427 + SHIDWORD(v427));
    v896 = *(_BYTE *)(a1 + 20LL * (signed int)v427 + SHIDWORD(v427)) - 48;
    if ( v896 <= 0 || v896 > 9 )
      v454 = 0;
    if ( (v746 >> v896) & 1 )
      v454 = 0;
    v746 |= 1 << v896;
    v596 += v896;
    ++v1046;
  }
  if ( v596 != 13 )
    v454 = 0;
  v597 = 0;
  v747 = 0;
  LODWORD(v428) = sub_110F4(&v1439, v1);
  v1047 = v428;
  LODWORD(v429) = sub_1110E(&v1439);
  while ( v1047 != v429 )
  {
    v430 = *v1047;
    v1 = (unsigned int)*v1047;
    *(&importmedieum[20 * (signed int)v430] + SHIDWORD(v430)) = *(_BYTE *)(a1 + 20LL * (signed int)v430 + SHIDWORD(v430));
    v897 = *(_BYTE *)(a1 + 20LL * (signed int)v430 + SHIDWORD(v430)) - 48;
    if ( v897 <= 0 || v897 > 9 )
      v454 = 0;
    if ( (v747 >> v897) & 1 )
      v454 = 0;
    v747 |= 1 << v897;
    v597 += v897;
    ++v1047;
  }
  if ( v597 != 15 )
    v454 = 0;
  v598 = 0;
  v748 = 0;
  LODWORD(v431) = sub_110F4(&v1443, v1);
  v1048 = v431;
  LODWORD(v432) = sub_1110E(&v1443);
  while ( v1048 != v432 )
  {
    v433 = *v1048;
    v1 = (unsigned int)*v1048;
    *(&importmedieum[20 * (signed int)v433] + SHIDWORD(v433)) = *(_BYTE *)(a1 + 20LL * (signed int)v433 + SHIDWORD(v433));
    v898 = *(_BYTE *)(a1 + 20LL * (signed int)v433 + SHIDWORD(v433)) - 48;
    if ( v898 <= 0 || v898 > 9 )
      v454 = 0;
    if ( (v748 >> v898) & 1 )
      v454 = 0;
    v748 |= 1 << v898;
    v598 += v898;
    ++v1048;
  }
  if ( v598 != 9 )
    v454 = 0;
  v599 = 0;
  v749 = 0;
  LODWORD(v434) = sub_110F4(&v1447, v1);
  v1049 = v434;
  LODWORD(v435) = sub_1110E(&v1447);
  while ( v1049 != v435 )
  {
    v436 = *v1049;
    v1 = (unsigned int)*v1049;
    *(&importmedieum[20 * (signed int)v436] + SHIDWORD(v436)) = *(_BYTE *)(a1 + 20LL * (signed int)v436 + SHIDWORD(v436));
    v899 = *(_BYTE *)(a1 + 20LL * (signed int)v436 + SHIDWORD(v436)) - 48;
    if ( v899 <= 0 || v899 > 9 )
      v454 = 0;
    if ( (v749 >> v899) & 1 )
      v454 = 0;
    v749 |= 1 << v899;
    v599 += v899;
    ++v1049;
  }
  if ( v599 != 3 )
    v454 = 0;
  v600 = 0;
  v750 = 0;
  LODWORD(v437) = sub_110F4(&v1451, v1);
  v1050 = v437;
  LODWORD(v438) = sub_1110E(&v1451);
  while ( v1050 != v438 )
  {
    v439 = *v1050;
    v1 = (unsigned int)*v1050;
    *(&importmedieum[20 * (signed int)v439] + SHIDWORD(v439)) = *(_BYTE *)(a1 + 20LL * (signed int)v439 + SHIDWORD(v439));
    v900 = *(_BYTE *)(a1 + 20LL * (signed int)v439 + SHIDWORD(v439)) - 48;
    if ( v900 <= 0 || v900 > 9 )
      v454 = 0;
    if ( (v750 >> v900) & 1 )
      v454 = 0;
    v750 |= 1 << v900;
    v600 += v900;
    ++v1050;
  }
  if ( v600 != 13 )
    v454 = 0;
  v601 = 0;
  v751 = 0;
  LODWORD(v440) = sub_110F4(&v1455, v1);
  v1051 = v440;
  LODWORD(v441) = sub_1110E(&v1455);
  while ( v1051 != v441 )
  {
    v442 = *v1051;
    v1 = (unsigned int)*v1051;
    *(&importmedieum[20 * (signed int)v442] + SHIDWORD(v442)) = *(_BYTE *)(a1 + 20LL * (signed int)v442 + SHIDWORD(v442));
    v901 = *(_BYTE *)(a1 + 20LL * (signed int)v442 + SHIDWORD(v442)) - 48;
    if ( v901 <= 0 || v901 > 9 )
      v454 = 0;
    if ( (v751 >> v901) & 1 )
      v454 = 0;
    v751 |= 1 << v901;
    v601 += v901;
    ++v1051;
  }
  if ( v601 != 10 )
    v454 = 0;
  v602 = 0;
  v752 = 0;
  LODWORD(v443) = sub_1120C(&v1863);
  v1052 = v443;
  LODWORD(v444) = sub_11226(&v1863);
  while ( v1052 != v444 )
  {
    v445 = *v1052;
    v1 = (unsigned int)*v1052;
    *(&importmedieum[20 * (signed int)v445] + SHIDWORD(v445)) = *(_BYTE *)(a1 + 20LL * (signed int)v445 + SHIDWORD(v445));
    v902 = *(_BYTE *)(a1 + 20LL * (signed int)v445 + SHIDWORD(v445)) - 48;
    if ( v902 <= 0 || v902 > 9 )
      v454 = 0;
    if ( (v752 >> v902) & 1 )
      v454 = 0;
    v752 |= 1 << v902;
    v602 += v902;
    ++v1052;
  }
  if ( v602 != 36 )
    v454 = 0;
  v603 = 0;
  v753 = 0;
  LODWORD(v446) = sub_110F4(&v1459, v1);
  v1053 = v446;
  LODWORD(v447) = sub_1110E(&v1459);
  while ( v1053 != v447 )
  {
    v448 = *v1053;
    *(&importmedieum[20 * (signed int)v448] + SHIDWORD(v448)) = *(_BYTE *)(a1 + 20LL * (signed int)v448 + SHIDWORD(v448));
    v903 = *(_BYTE *)(a1 + 20LL * (signed int)v448 + SHIDWORD(v448)) - 48;
    if ( v903 <= 0 || v903 > 9 )
      v454 = 0;
    if ( (v753 >> v903) & 1 )
      v454 = 0;
    v753 |= 1 << v903;
    v603 += v903;
    ++v1053;
  }
  if ( v603 != 8 )
    v454 = 0;
  v604 = 0;
  v754 = 0;
  LODWORD(v449) = sub_1112C(&v1577);
  v1054 = v449;
  LODWORD(v450) = sub_11146(&v1577);
  while ( v1054 != v450 )
  {
    v451 = *v1054;
    *(&importmedieum[20 * (signed int)v451] + SHIDWORD(v451)) = *(_BYTE *)(a1 + 20LL * (signed int)v451 + SHIDWORD(v451));
    v904 = *(_BYTE *)(a1 + 20LL * (signed int)v451 + SHIDWORD(v451)) - 48;
    if ( v904 <= 0 || v904 > 9 )
      v454 = 0;
    if ( (v754 >> v904) & 1 )
      v454 = 0;
    v754 |= 1 << v904;
    v604 += v904;
    ++v1054;
  }
  if ( v604 != 6 )
    v454 = 0;
  result = (unsigned __int8)v454;
  v453 = *MK_FP(__FS__, 40LL) ^ v1879;
  return result;
}
