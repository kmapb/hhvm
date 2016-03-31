<?php

include (__DIR__ . '/redis.inc');

$r = NewRedisTestInstance();
$r->setOption(Redis::OPT_PREFIX, GetTestKeyName(__FILE__) . ':');
$r->delete('sscan');

$r->sadd('sscan', 'member:one', 'member:two', 'member:three', 'member:four');

$cursor = 0;
var_dump($r->sscan('sscan', $cursor));
var_dump($cursor);

$cursor = 0;
var_dump($r->sscan('sscan', $cursor, 'member:t*'));
var_dump($cursor);

$cursor = 0;
var_dump($r->sscan('sscan', $cursor, 'nomember:*'));
var_dump($cursor);

$r->delete('sscan');
