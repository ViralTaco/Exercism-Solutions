<?php
function from(DateTimeImmutable $start): DateTimeImmutable {
    return $start->add(new DateInterval('PT'.(1e9).'S'));
}
