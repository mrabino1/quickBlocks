#!/usr/bin/env bash
#
# A shell script to retrieve transaction histories from EtherScan and compare them
# to transaction histories created by qblocks. We are hoping for no transactions
# from EtherScan that qblocks doesn't find. And zero or more transations from
# qblocks that EtherScan doesn't find.
#
# All the work is done in a series of sub programs stored in the 'scripts'
# subfolder. The process starts with cmp_ethscan(addr, name, <optional>)
# where the third parameter indicates that the analysis has been confirmed.
#
# Important note: These shell scripts assumes that ./quickBlocks/bin is
# in your $PATH
#

./chifra 0x423b5f62b328d0d6d44870f4eee316befa0b2df5 00_gonetwork
./chifra 0x814964b1bceaf24e26296d031eadf134a2ca4105 00_newbium
## ./chifra 0xc9d7fec9889690bbff0a0df758d13e5a55dd7822 00_newbium

./chifra 0xb8c77482e45f1f44de1745f52c74426c631bdd52 01_bnb
./chifra 0xd26114cd6ee289accf82350c8d8487fedb8a0c07 01_omg
./chifra 0xdac17f958d2ee523a2206206994597c13d831ec7 01_usdt
./chifra 0xe41d2489571d322189246dafa5ebde1f4699f498 01_zrx

./chifra 0x0d8775f648430679a709e98d2b0cb6250d2887ef 02_bat
./chifra 0x9f8f72aa9304c8b593d555f12ef6589cc3a579a2 02_maker
./chifra 0x1985365e9f78359a9b6ad760e32412f4a445e862 02_rep
./chifra 0x05f4a42e251f2d52b8ed15e9fedaacfcef1fad27 02_zil

./chifra 0xcb97e65f07da24d46bcdd078ebebd7c6e6e3d750 03_btm
./chifra 0xa74476443119a942de498590fe1f2454d7d4ac0d 03_gnt
./chifra 0xa15c7ebe1f07caf6bff097d8a589fb8ac49ae5b3 03_npxs
./chifra 0xb7cb1c96db6b22b0d3d9536e0108d062bd488f74 03_wtc

./chifra 0xfa1a856cfa3409cfa145fa4e20eb270df3eb21ab 04_iost
./chifra 0xd4fa1460f537bb9085d22c7bccb5dd450ef28e3a 04_ppt
./chifra 0x168296bb09e24a88805cb9c33356536b980d3fc5 04_rhoc
./chifra 0x744d70fdbe2ba4cf95131626614a1763df805b9e 04_snt

./chifra 0x4ceda7906a5ed2179785cd3a40a69ee8bc99c466 05_aion
./chifra 0x039b5649a59967e3e936d7471f9c3700100ee1ab 05_kcs
./chifra 0x514910771af9ca656af840dff83e8264ecf986ca 05_link
./chifra 0x3893b9422cd5d70a81edeffe3d5a1c6a978310bb 05_mith

./chifra 0x1f573d6fb3f13d689ff844b4ce37794d79a7ff1c 06_bnt
./chifra 0xe0b7927c4af23765cb51314a0e0521a9645f0e2a 06_dgd
./chifra 0xbf2179859fc6d5bee9bf9158632dc51678a4100e 06_elf
./chifra 0x6c6ee5e31d828de241282b9606c8e98ea48526e2 06_hot

./chifra 0x35a9b440da4410dd63df8c54672b728970560328 07_mana
./chifra 0x595832f8fc6bf59c85c527fec3740a1b7a361269 07_power
./chifra 0x618e75ac90b12c6049ba3b27f5d5f8651b0037f6 07_qash
./chifra 0x9cda8a60dd5afa156c95bd974428d91a0812e054 07_ttu

./chifra 0x9ab165d795019b6d8b3e971dda91071421305e5a 08_aoa
./chifra 0xdd974d5c2e2928dea5f71b9825b8b646686bd200 08_knc
./chifra 0xa4e8c3ec456107ea67d3075bf9e3df3a75823db0 08_loom
./chifra 0x8dd5fbce2f6a956c3022ba3663759011dd51e73e 08_tusd

./chifra 0xef68e7c694f40c8202821edf525de3782458639f 09_lrc
./chifra 0x58a4884182d9e835597f405e5f258290e46ae7c2 09_noah
./chifra 0xb91318f35bdb262e9423bc7c7c2a3a93dd93c92c 09_nuls
./chifra 0x39bb259f66e1c59d5abef88375979b4d20d98022 09_wax

./chifra 0xf85feea2fdd81d51177f6b8f35f0e6734ce45f5f 10_cmt
./chifra 0xf0ee6b27b759c9893ce4f094b49ad28fd15a23e4 10_eng
./chifra 0x12480e24eb5bec1a9d4369cab6a80cad3c0a377a 10_sub
./chifra 0x3883f5e181fccaf8410fa61e12b59bad963fb645 10_theta

./chifra 0xb3104b4b9da82025e8b9f8fb28b3553ce2f67069 11_bix
./chifra 0xea11755ae41d889ceec39a63e6ff75a02bc1c00d 11_ctxc
./chifra 0x4672bad527107471cb5067a887f4656d585a8a31 11_drop
./chifra 0x9992ec3cf6a55b00978cddf2b27bc6882d88d1ec 11_poly