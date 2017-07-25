<?php

/**
 * @file
 * Hooks provided by the ClamAV module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Act on an uploaded file being scanned by ClamAV.
 *
 * Modules implementing this hook can prevent a file being scanned by ClamAV
 * during the file upload process.
 *
 * @param $file
 *   A file entity.
 *
 * @see hook_file_validate()
 */
function hook_clamav_file_is_scannable($file) {
  // Exempt files with the text/plain mimetype from being virus checked.
  if ($file->filemime == 'text/plain') {
    return FALSE;
  }
}

/**
 * @} End of "addtogroup hooks".
 */
