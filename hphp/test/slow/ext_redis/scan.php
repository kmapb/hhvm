<?php

include (__DIR__ . '/redis.inc');

$r = NewRedisTestInstance();
$r->setOption(Redis::OPT_PREFIX, GetTestKeyName(__FILE__) . ':');
$r->delete('scan');

$r->mset(array('key:one' => 'one', 'key:two' => 'two',
               'key:three' => 'three','key:four' => 'four'));

$cursor = 0;
var_dump($r->scan($cursor));
var_dump($cursor);

$cursor = 0;
var_dump($r->scan($cursor, 'key:t*'));
var_dump($cursor);

$cursor = 0;
var_dump($r->scan($cursor, 'nokey:t*'));
var_dump($cursor);

$r->delete('key:one');
$r->delete('key:two');
$r->delete('key:three');
$r->delete('key:four');
