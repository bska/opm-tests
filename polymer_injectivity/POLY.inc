PLYROCK
-- IPV   RRF   dens   AI   max ads
   0.05  1.1   2000    2   0.000050 /


--PLYADS: Adsorption isotherm
PLYADS
-- conc  adsorb-conc
 0.000   0.000000
 0.250	 0.00001
 0.500	 0.000013
 0.750	 0.000015
 1.000	 0.000017
 1.250	 0.000018
 1.500	 0.000019
 2.000	 0.000023
 2.750	 0.000025
 3.000	 0.000025
 4.000	 0.000025 /

-- Max. concentration to be used in the mixing calculation
PLYMAX
  4.00  0  /

PLYVMH
  0.01 0.5 0.5 0.6 /

INCLUDE
    'PLYMWINJ.inc' /

INCLUDE
    'SKPRWAT.inc' /

INCLUDE
    'SKPRPOLY.inc' /

INCLUDE
    'PLYMWINJ2.inc' /

INCLUDE
    'SKPRWAT2.inc' /

INCLUDE
    'SKPRPOLY2.inc' /
